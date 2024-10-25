#include<stdio.h>
#include<string.h>
int main ()
{
    int test,n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        printf("%c\n",str[n-1]);
    }
}