#include<stdio.h>
int main()
{
    int test;
    long long n;
    scanf ("%d",&test);
    while(test--)
    {
        scanf ("%lld",&n);
        printf("%lld\n",n*n+2*n+2);
    }
}