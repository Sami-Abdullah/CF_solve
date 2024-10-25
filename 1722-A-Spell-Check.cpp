#include<stdio.h>
int main ()
{
    int test,b=0,c=0,d=0,e=0,f=0;
    scanf("%d",&test);
    while(test--)
    {
        int a;
        scanf("%d",&a);
        char str[a];
        scanf ("%s",str);
        if (a!=5)printf("No\n");
        else 
        {
            for(int i=0;i<5;i++)
            {
                if(str[i]=='T')b=1;
                else if(str[i]=='i')c=1;
                else if(str[i]=='m')d=1;
                else if(str[i]=='u')e=1;
                else if (str[i]=='r')f=1;
                else break;
            }
            if(d==1&&b==1&&c==1&&e==1&&f==1)printf("yes\n");
            else printf("no\n");
        }
        b=0,c=0,d=0,e=0,f=0;
    }
}