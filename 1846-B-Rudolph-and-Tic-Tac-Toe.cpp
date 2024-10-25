#include<stdio.h>
int main ()
{
    char str[3][3],a;
    int i,j,k=0,t;
    scanf ("%d",&t);
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            scanf("%s",str[i]);
        }
     if(str[0][0]==str[1][1]&&str[1][1]==str[2][2]&&str[0][0]!='.') 
            {
                printf("%c\n",str[0][0]);
                continue;

            } 
             else if(str[2][0]==str[1][1]&&str[1][1]==str[0][2]&&str[2][0]!='.') 
            {
                printf("%c\n",str[2][0]);
                continue;
            }
        for (i=0;i<3;i++)
        {
            if(str[i][0]==str[i][1]&&str[i][1]==str[i][2]&&str[i][0]!='.')
            {
                a=str[i][0];
                k=1;
                break;
            }
            else if(str[0][i]==str[1][i]&&str[1][i]==str[2][i]&&str[0][i]!='.') 
            {
                a=str[0][i];
                k=1;
                break;
            }
             
        }
        if (k==0)printf ("DRAW\n");
        else printf ("%c\n",a);
        k=0;
    }
}