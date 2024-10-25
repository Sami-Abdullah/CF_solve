#include<stdio.h>
int main ()
{
    int test;
    scanf ("%d",&test);
    while(test--)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)printf("%d\n",a/2);
        else printf("%d\n",(a/2)+1);
    }
}