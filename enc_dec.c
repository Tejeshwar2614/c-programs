#include <stdio.h>
#include <string.h>
int main() {
    int m=7;
    char ip[10][20] = {"198.168.1.1","192.168.1.2","192.168.1.3","190.168.1.4","190.168.1.5","190.168.1.6","168.168.1.7"};
    char mac[10][20] = {"00:23:AA:45:67:11","22:11:45:56:AA:12","22:34:AA:56:43:76","12:54:BB:AA:22:33","12:23:34:56:67","12:BB:56:87:45:45","43:56:78:98:AA:BB"};
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==1)
    {
        char inip[20];
        scanf("%s",&inip);
        int f=0;
        for(int i=0;i<m;i++){
            if(strcmp(inip,ip[i])==0){
                printf("%s ",mac[i]);
                f++;
                break;
                }
        }
        if(f==0){
            printf("invalid");
        }
    }
    else if(n==2)
    {
        char inmac[20];
        scanf("%s",inmac);
        int f = 0;
        for(int i=0;i<m;i++){
            if(strcmp(inmac,mac[i])==0){
                printf("%s ",ip[i]);
                f++;
                break;
            }
        }
        if(f==0){
            printf("invalid");
        }
        
        
    }
}
