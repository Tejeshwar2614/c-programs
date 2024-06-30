#include<stdio.h>

void burst_time(int bt[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
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
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",wt[i]);
        sum = sum+wt[i];
    }
    printf("\n");
    printf("the average wating time is : %d",sum/n);
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
    printf("the average turn around time : %d",sum/n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int bt[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&bt[i]);
    }
    printf("the burst time is : ");
    burst_time(bt,n);
    printf("\n");
    printf("the waiting time is : ");
    waiting_time(bt,n);
    printf("\n");
    printf("the turn around time is : ");
    turn_around_time(bt,n);

}   
