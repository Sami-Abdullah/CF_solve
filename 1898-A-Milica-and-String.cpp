#include<stdio.h>
int main ()
{
    int test,b=0;
    scanf ("%d",&test);
    while(test--)
    {
        int size,n,i;
        scanf("%d%d",&size,&n);
        char str[size];
        scanf("%s",str);
        for(i=0;i<size;i++)
            if(str[i]=='B')b++;

            if (n==b)
            {
                printf ("0\n");
                b=0;
            }
            else if (n>b)
            {
                for(i=0;n>b;i++)if (str[i]=='A')b++;
                printf("1\n%d B\n",i);
            }
            else
            {
                 for(i=0;b>n;i++)if(str[i]=='B')b--;
                 printf ("1\n%d A\n",i);
            }
            b=0;
    }
}