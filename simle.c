#include<stdio.h>
#include<stdlib.h>



int ind_check(int* r1,int* c1,int n1,int r,int c)
{
    for(int i=0;i<n1;i++)
    {
        if(r1[i] == r && c1[i] == c)
            return 1;
    }
    return 0;
}

int  eval_time(char a[60][60],int t,int r,int c)
{
   int ct=1,c2 =1,T=0,b[10],n=0,p=0;
   int r1[200],c1[200],n1=0;
   while(ct)
   {
       n=0;
       c2 = 1;
       p=0;
       for(int i=0;i<r && c2;i++)
       {
           for(int j=0;j<c && c2;j++)
           {
               n=0;
               if(a[i][j] == 'F')
               {
                   a[i][j] = '#';
               }
                if(a[i][j] == '#' && !ind_check(r1,c1,n1,i,j))
                {
                   if(i-1>=0)
                   {
                       if(a[i-1][j] == 'E')
                        {
                            a[i-1][j] = '#';
                            r1[n1] = i-1;
                            c1[n1++] = j;
                            n++;
                        }
                       if(j+1<c && a[i-1][j+1] == 'E')
                        {
                            a[i-1][j+1] = '#';
                            r1[n1] = i-1;
                            c1[n1++] = j+1;
                            n++;
                        }
                       if(j-1>=0 && a[i-1][j+1] == 'E')
                        {   
                             a[i-1][j+1] = '#';
                             r1[n1] = i-1;
                             c1[n1++] = j+1;
                             n++;
                        }
                   }
                   if(i+1<r)
                   {
                        if(a[i+1][j] == 'E')
                        {    
                            a[i+1][j] = '#';
                            r1[n1] = i+1;
                            c1[n1++] = j;
                            n++;
                        }
                        if(j-1>=0 && a[i+1][j-1] == 'E')
                        {    
                            a[i+1][j-1] = '#';
                            r1[n1] = i+1;
                            c1[n1++] = j-1;
                            n++;
                        }
                        if(j+1<=c && a[i+1][j+1] == 'E')
                        {   
                             a[i+1][j+1] = '#';
                             r1[n1] = i+1;
                             c1[n1++] = j+1;
                             n++;
                        }
                   }
                   if(j+1<c)
                   {
                        if(a[i][j+1] == 'E')
                        {
                            a[i][j+1] = '#';
                            r1[n1] = i;
                            c1[n1++] = j+1;
                            n++;
                        }
                        if(i+1<r && a[i+1][j+1] == 'E')
                        {
                            a[i+1][j+1] = '#';
                            r1[n1] = i+1;
                            c1[n1++] = j+1;
                            n++;
                        }
                        if(i-1>=0 && a[i-1][j+1] == 'E')
                        {
                            a[i-1][j+1] = '#';
                            r1[n1] = i-1;
                            c1[n1++] = j+1;
                            n++;
                        }
                   }
                   if(j-1>=0)
                   {
                       if(a[i][j-1] == 'E')
                       {
                           a[i][j-1] = '#';
                           r1[n1] = i;
                           c1[n1++] = j-1;
                           n++;
                       }
                       if(a[i+1][j-1] == 'E')
                       {
                           a[i+1][j-1] = '#';
                           r1[n1] = i+1;
                           c1[n1++] = j-1;
                           n++;
                       }
                       if(a[i-1][j-1] == 'E')
                        {
                            a[i-1][j-1] = '#';
                            r1[n1] = i-1;
                            c1[n1++] = j-1;
                            n++;
                        }
                   }
                    if(n>0)
                    {
                        p=1;
                        T+=t;
                    }
                
                }
           }
       }
        if(p == 0)
            ct=0;
        n1=0;
    
   }
   return T;
}

int exp_count(char a[60][60],int r,int c)
{
    int c1=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] == 'E')
                c1++;
        }
    }
    return c1;
}
int main()
{
    char a[60][60];
    int r,c,t,count;
    scanf("%d %d ",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%c ",&a[i][j]);
        }
    }
    scanf("%d",&t);
    t = eval_time(a,t,r,c);
    count = exp_count(a,r,c);
    printf("%d %d",count,t);
}