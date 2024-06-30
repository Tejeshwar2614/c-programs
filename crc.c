#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],b[20],c[20],d[20],l;
    int i,j,m,n,data,div,t,k,e;
    printf("\nenter the nit numbers : ");
    scanf("%d %d",&data,div);
    printf("\nenter the data : ");
    for(i=0;i<data;i++){
        scanf("%d",&a[i]);
        c[i] = a[i];
    }
    m = data+div-1;
    for(i=data;i<m;i++){
        c[i] = 0;
    }
    printf("\nEnter the divisor");
    for(i=0;i<div;i++){
        scanf("%d",&b[i]);
    }
    l=div,t=0,k=0;
    for(i=0;i<data;i++){
        t=0;e=0;
        for(j=1;j<div;j++){
            if(((a[j]==0)&&(b[j]==0))||((a[j]==1)&&(b[j]==1))){
                d[j-1] = 0;
                if(e!=1){
                    t= t+1;
                    k=k+1;
                    i=i+1;
                }
            }
            else{
                d[j-1] = 1;
                e=1;
            }
        }
        j=0;
        for(e=t;e<div-1;e++){
            a[j] = d[e];
            j++;
        }
        for(j=j;j<div;j++){
            if(l>=data+1){
                a[j] = 0;
            }
            else{
                a[j] = c[l];
                l=l+1;
            }
        }
    }
    printf("the crc bits are : ");
    for(i=0;i<div-1;i++){
        printf("%d",a[i]);
    }
}