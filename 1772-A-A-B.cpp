#include<stdio.h>
int main ()
{
    int a,b,c,i;
    char str[4];
    scanf ("%d",&c);
    while (c--)
    {
        scanf ("%s",&str);
        a=str[0]-48;
        b=str[2]-48;
        printf ("%d\n",a+b);
    }
}