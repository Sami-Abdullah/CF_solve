#include<stdio.h>
int main ()
{
    int test;
    ;
    scanf("%d",&test);
    while(test--)
    {
        int n,alice=0,bob=0,f=1,i=-1;;
        scanf ("%d",&n);
        while(1)
        {
            if(f==0)
            {
                f=1;
                if(n>=i+1+i+2)bob=bob+i+1+i+2;
                else bob=bob+n;
                n=n-(+i+1+i+2);
                i=i+2;
            }
            else
            {
                f=0;
                if(n>=i+1+i+2)alice=alice+i+1+i+2;
                else alice=alice+n;
                n=n-(i+1+i+2);
                i=i+2;
            }
            if(n<0)break;
        }
        printf("%d %d\n",alice,bob);
    }
}