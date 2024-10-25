#include<stdio.h>
#include<string.h>
int main ()
{
    int test;
    char str[4];
    scanf ("%d",&test);
    while(test--)
    {
        int i=0,n,N,M=1,z=26,c=0;
        scanf("%d",&n);
       while(c<3)
       {
        N=n-z;
        if (N>M)
        {
            str[i]=z+'a'-1;
            n=N;
            M--;
            c++;
            i++;
        }
        else z--;
       }
        printf ("%s\n",strrev(str));
    }
}