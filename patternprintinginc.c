
#include<stdio.h>
#include<stdlib.h>
/*void pattern_printing(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void pattern_printing2(int d)
{
    int i,j;
    for(i=d;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void square_box(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            if(i==0||i==d-1)
            {
                printf("# ");
            }
            else if(i==1||i==d-2)
            {
                printf("+ ");
            }
            else 
            {
                if(j==0||j==d-1)
                {
                    printf("# ");
                }
                else 
                {
                    if((j==1||j==d-2))
                    {
                        printf("* ");
                    }
                    else{
                        printf("- ");
                    }
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    pattern_printing(num);
    square_box(num);
    pattern_printing2(num);    
}
int GCD(int a,int b)
{
    int i,ans=1,n=0,m=0;
    int c;
    c = a>=b?b:a;
    for(i=2;i<=c;i++)
    {
        m=0;
        n=0;
        if(a%i==0){
            n=1;
            a=a/i;
        }
        if(b%i==0){
            m=1;
            b=b/i;
        }
        if(m==1 && n==1){
            ans = ans*i;
        }
        if(n==1 || m==1){
            i--;
        }
    }
    return ans;
}
int main()
{
    int a=13,b=26  ;
    int gcd = GCD(a,b);
    printf("%d",gcd);

}
int main()
{
    int n;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=n;i>2;i--){
        for(int j=1;j<i;j++){
            if(j==i-1)
            printf("%d ",j);
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
}*/
 int swap(int n,int m){
    int temp = n;
    n = m;
    m = temp;
    return n,m;
 }
 int main()
 {
    int n;
    scanf("%d",&n);
    int b[100];
    for(int i=1;i<n;i++){
        scanf("%d ",&b[i]);
    }
    printf("%d",b[1]);
    for(int i=1;i<n;i++){
        if(i%3==0){
            swap(b[i],b[i-2]);
        }
        printf("%d ",b[i]);
    }
 }