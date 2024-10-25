#include<stdio.h>
int main ()
{
    int test;
    char str[4];
    scanf ("%d",&test);
    while(test--)
    {
        scanf ("%s",str);
        if(str[0]=='a')printf("yes\n");
        else if(str[1]=='b')printf ("yes\n");
        else if (str[2]=='c')printf("yes\n");
        else printf ("no\n");
    }
}