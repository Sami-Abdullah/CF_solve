#include<stdio.h>
int main ()
{
    int test,n;
    scanf ("%d",&test);
    while(test--)
    {
        int p1=0,p2=0,k,a=0;
        scanf ("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf ("%d",&arr[i]);
           if(arr[i]==1)p1++;
           else p2++;
        }
        if(p2==0)printf("1\n");
        else if(p2%2!=0)printf ("-1\n");
        else 
        {
            for(int i=0;i<n&&a!=p2/2;i++)
            {
                if(arr[i]==2)
                {
                    k=i+1;
                    a++;
                }
            }
            printf ("%d\n",k);
        }
    }
}