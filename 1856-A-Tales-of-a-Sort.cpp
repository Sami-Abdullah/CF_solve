#include<stdio.h>

int main ()
{
    int t,i,n,f=0,j,count;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d",&n);
        long long arr[n],max=0;                                             
        for(i=0;i<n;i++)scanf ("%lld",&arr[i]);
            for(i=0;i<n-1;i++)
            {
                if (arr[i]>arr[i+1])
                {
                    
                     if (max>arr[i])max=max;
                    else max =arr[i];
                }
            }
            printf ("%d\n",max);
    }
}