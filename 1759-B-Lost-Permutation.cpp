#include<stdio.h>
int main ()
{
    int t,i;
    scanf ("%d",&t);
    while(t--)
    {
       int n,sum,j,k=0,f=0,max=0;
       scanf("%d%d",&n,&sum);

       for(i=0;i<n;i++)
       {
        scanf("%d",&j);
        sum=sum+j;
        if(max<j)max=j;
       }
       for(i=1;i<sum;i++)
       {
        if(sum<=k)break;
        k=k+i;
        f=i;
       }
       if(sum!=k||f<=n)printf ("NO\n");
       else 
       {
        if(max>f)printf("NO\n");
        else printf("YES\n");
       }
    }
}