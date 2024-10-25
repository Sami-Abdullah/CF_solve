#include<stdio.h>
int main ()
{
    int test;
    scanf ("%d",&test);
    while(test--)
    {
        int b,f=0,sum=2;
        long long a;
        scanf ("%lld%d",&a,&b);
       if(a%2==0)printf ("YES\n");
       else if(a==b)printf ("YES\n");
       else if(a%2!=0&&b%2==0)printf("NO\n");
       else 
       {
        while(a>=2)
        {
            a=a-b;
            if(a%2==0)break;
        }
        if(a%2==0)printf ("YES\n");
        else printf ("NO\n");
       }
    }
}