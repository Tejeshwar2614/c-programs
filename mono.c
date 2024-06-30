#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f = 1;
            break;
        }
    }
    if(f==0){
        printf("prime");
    }
    if(f==1 && n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}