#include<stdio.h>

int main ()
{
    int t,n,i,a,b,temp1,temp2=0,f=0;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d",&n);
        for (i=0;i<n;i++)
        {
            scanf ("%d%d",&a,&b);
            if (a<11&&temp2<b)
            {
                temp1=a;
                temp2=b;
                f=i+1;
            }    
        }
        printf ("%d\n",f);
        temp2=0;
    }
}