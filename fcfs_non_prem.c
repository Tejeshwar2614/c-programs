#include <stdio.h>

void burst_time(int bt[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",bt[i]);
    }
}
void waiting_time(int bt[],int n)
{
    int k=1,wt[5];
    wt[0] = 0;
    int s = 0;
    for(int i=0;i<n;i++){
        s = s+bt[i];
        wt[k++] = s;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",wt[i]);
        sum = sum+wt[i];
    }
    printf("\n");
    printf("the average waiting time is : %d",sum/n);
}
void turn_around_time(int bt[],int n)
{
    int k=0,tat[5];
    int s = 0;
    for(int i=0;i<n;i++){
        s=s+bt[i];
        tat[k++] = s;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",tat[i]);
        sum = sum+tat[i];
    }
    printf("\n");
    printf("the average tat time is : %d",sum/n);
}
int main()
{
    int n;
    int bt[10];
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&bt[i]);
    }
    printf("burst time is =  ");
    burst_time(bt,n);
    printf("\n");
    printf("waiting time is = ");
    waiting_time(bt,n);
    printf("\n");
    printf("the turn around time is = ");
    turn_around_time(bt,n);
}
