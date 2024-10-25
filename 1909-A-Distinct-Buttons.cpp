#include<stdio.h>
#include<string.h>

int main ()
{
    int test,i,a,b,r=0,l=0,u=0,d=0;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&a,&b);
            if(a>0)r++;
            else if(a<0)l++;
             if (b>0)u++;
            else if(b<0)d++;
        }
        if (r>0&&l>0&&u>0&&d>0)printf ("No\n");
        else printf ("Yes\n");
        r=0,l=0,u=0,d=0;
    }
}