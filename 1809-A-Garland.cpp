#include<stdio.h>
#include<stdbool.h>
int main ()
{
    int test,arr[10]={0},max=0;
    char str[4];
    scanf ("%d",&test);
    while(test--)
    {
        scanf ("%s",str);
        for(int i=0;i<4;i++)
        {
            if(str[i]>='0'&&str[i]<='9')arr[str[i]-'0']++;
            if (max<arr[str[i]-'0'])max=arr[str[i]-'0'];
        }
            if(max==4)printf ("-1\n");
            else if (max==3)printf ("6\n");
            else if (max==2)printf ("4\n");
            else printf ("4\n");
            max=0;
            for(int i=0;i<10;i++)arr[i]=0;
    }
}