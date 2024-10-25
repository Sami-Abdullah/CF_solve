#include<stdio.h>
#include<string.h>
int main ()
{
    int test,cnt=0,i=0,len,a=0,b=0;
    scanf ("%d",&test);
    while(test--)
    {
        char str[100];
        scanf("%s",str);
        len=strlen(str);
        if(str[0]=='_'&&strlen(str)==1)printf ("2\n");
        else if(str[0]=='^'&&strlen(str)==1)printf("1\n");
        else
        {
            if(str[0]=='_')cnt=1;
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]=='^')continue;
                else if (str[i]=='_'&&str[i+1]!='^')cnt++;
            }
            printf ("%d\n",cnt);
            cnt=0;
        }  
    }
}