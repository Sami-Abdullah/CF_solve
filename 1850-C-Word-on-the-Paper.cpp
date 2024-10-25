#include<stdio.h>
#include<string.h>
int main ()
{
    int i,t,n,k,j=0,l=0;
    char str1[8][9],str2[1][9]={"........"},str3[9];
    scanf("%d",&t);
    while(t--)
    {
        for (i=0;i<8;i++)
        {
            scanf ("%s",&str1[i]);
        }
        for (i=0;i<8;i++)
        {
            k=strcmp(str2[0],str1[i]);
            if (k!=0)
            {
                for (j=0;j<9;j++)
                {
                    if (str1[i][j]!='.')
                    {
                         str3[l]=str1[i][j];
                         l++;
                         break;
                    }
                }
            }
        }
        str3[l]='\0';
        printf ("%s\n",str3);
        l=0;
    }
}