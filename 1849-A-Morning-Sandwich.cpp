#include<stdio.h>
int main ()
{
    int t,a,b,c,l;
    scanf ("%d",&t);
    while(t--)
    {
        scanf ("%d%d%d",&a,&b,&c);
        if (a-1>b+c)
        {
            l=a-((a-1)-(b+c));
            printf("%d\n",l+b+c);
        }
        else if(a-1<b+c)
        printf ("%d\n",2*a-1);
        else if (a-1==b+c)printf ("%d\n",a+b+c);
    }

}