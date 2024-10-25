#include<stdio.h>
int main ()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,aW=0,aB=0,bW=0,bB=0,f=0,i=-1;;
        scanf ("%d",&n);
        while(1)
        {
            if(f==0)
            {
                f=1;
                if(n>=i+1+i+2)aW=aW+i+2,aB=aB+i+1;
                else 
                {
                    if(n%2==0)aW=aW+n/2,aB=aB+n/2;
                    else aW=aW+(n/2)+1,aB=aB+n/2;
                }
                n=n-(+i+1+i+2);
                i=i+2;
            }
            else
            {
                f=0;
                if(n>=i+1+i+2)bW=bW+i+1,bB=bB+i+2;
                else
                {
                    if(n%2==0)bW=bW+n/2,bB=bB+n/2;
                    else bW=bW+(n/2),bB=bB+n/2+1;
                }
                n=n-(i+1+i+2);
                i=i+2;
            }
            if(n<0)break;
        }
        printf("%d %d %d %d\n",aW,aB,bW,bB);
    }
}