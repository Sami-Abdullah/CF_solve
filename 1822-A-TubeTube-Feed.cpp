#include<stdio.h>
int main ()
{
    int t,n,l,i,count=0,f=0,best=0,k=0;
    scanf ("%d",&t);
    while(t--)
    {
        scanf ("%d%d",&n,&l);
        int arr1[n],arr2[n];
        for (i=0;i<n;i++)scanf("%d",&arr1[i]);
        for (i=0;i<n;i++)scanf("%d",&arr2[i]);
        for (i=0,l;i<n;i++,l--)
        {
            if (arr1[i]<=l&&arr2[i]>=best)
            {
                best= arr2[i];
                count=i+1;
                f=2;
            }
        }
        if (f==0)printf ("-1\n");
        else printf ("%d\n",count);
        count=1;
        f=0;
        best=0;
    }
}
