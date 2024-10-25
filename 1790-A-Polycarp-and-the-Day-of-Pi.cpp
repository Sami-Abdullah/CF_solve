#include<stdio.h>
#include<string.h>
int main ()
{
    char str[]="314159265358979323846264338327";
    int test,cnt=0;
    scanf ("%d",&test);
    while (test--)
    {
        char syr [31];
        scanf ("%s",syr);
        int len =strlen(syr);
        for(int i=0;i<len;i++)
        {
            if (syr[i]==str[i])cnt++;
            else break;
        }
        printf ("%d\n",cnt);
        cnt=0;
    }
}