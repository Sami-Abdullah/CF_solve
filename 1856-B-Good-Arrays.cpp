#include<stdio.h>
int main ()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,f=0;
        scanf ("%d",&n);
        long long arr[n],sum=0,j=0;
        for(int i=0;i<n;i++)
        {
         scanf ("%lld",&arr[i]),sum=sum+arr[i];
         if(arr[i]==1)j++;
        }
       
       if(sum>=j+n&&n>1)printf("yes\n");
       else printf("no\n");
    }
}