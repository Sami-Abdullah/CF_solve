#include<stdio.h>
int main ()
{
    long t,a,b,c,i=0,t1,t2;
    scanf ("%ld",&t);
    while (i<t)
    {
        scanf ("%ld %ld %ld",&a,&b,&c);
        t1=a-1;
        if (b<c)t2=(c-b)+(c-1);
        else t2 =(b-1);
        if (t1<t2)printf ("1\n");
        else if (t1==t2)printf ("3\n");
        else printf ("2\n");
        t1=0,t2=0;
        i++;
    }
}