#include <stdio.h>
int resource = 1;
int rmutex = 1;
int readcount=0;

int wait(int sem)
{
    return(--sem);
}
int signal(int sem)
{
    return (++sem);
}
void writer()
{
    wait(resource);     
    signal(resource);
}
void reader()
{
    wait(rmutex);
    readcount++;
    if(readcount==1){
        wait(resource);
    }
    signal(rmutex);
    wait(rmutex);
    readcount--;
    if(readcount==0){
        signal(resource);
    }
    signal(rmutex);

}
int main() {
    int n;
    do{
        printf("enter the choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                writer();
                break;
            }
            case 2:
            {
                reader();
                break;
             }
        }
    }while(n>3);
}