#include<stdio.h>
#include<math.h>
int main ()
{
    int test,n,i,f=0;
    long long sum;
    float j;
    scanf ("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        
        j=sqrt(sum);
        if (j*j==sum)printf("YES\n");
        else printf("NO\n");
        sum=0;
           
    }
}