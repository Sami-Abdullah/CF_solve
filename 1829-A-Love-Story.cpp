#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[11]="codeforces",str2[11];
    int cnt=0,i=0,t;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%s",str2);
        for (i=0;str1[i]!='\0';i++)
        {
            if (str1[i]!=str2[i])cnt++;
        }
        printf ("%d\n",cnt);
        cnt=0;
    }
   
}