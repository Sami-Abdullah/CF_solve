#include<stdio.h>
int main ()
{
    int t,n,a,b,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf ("%d",&n);
       for(int i=0;i<n;i++)
       {
        scanf ("%d%d",&a,&b);
        if(a>b)count++;
       }
    printf ("%d\n",count);
    count=0;
    }
    
}