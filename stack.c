#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,v=0;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n,&m);
    //int c=0;
    for(int i=m;i>=n;i--){
        int f=i;
        int r = i;
        int a[100]={0},k=0;
        while(f!=1){
            int t=0;
            while(f>0){
                t = t+((f%10)*(f%10));
                f/=10;
            }
            int w=0;
            for(int i=0;i<k;i++){
                if(a[i]==t){
                    w=1;
                    break;
                }
            }
            if(w==1){
                break;
            }
            f = t;
            a[k++] = t;
        }
        if(f==1){
            v++;
        }
    }
    printf("%d",v);
}