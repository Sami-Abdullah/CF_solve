#include<stdio.h>
int main ()
{
    int test,n,sum=0,k;
    scanf ("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(int i=0;i<n-1;i++)
        {
            scanf ("%d",&k);
            sum=sum+k;
        }
        printf ("%d\n",sum*(-1));
        sum=0;
    }
}