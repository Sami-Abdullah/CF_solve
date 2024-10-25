#include<stdio.h>
int main ()
{

    int test,i;
    scanf("%d",&test);
    while(test--)
    {

        int n,f=0;
        scanf ("%d",&n);
        int arr[n];
        char str[n];
        scanf("%s",str);
       for(i=0;i<n;i++)
       {
        if (str[i]=='m'||str[i]=='M')arr[i]=1;
        else if (str[i]=='e'||str[i]=='E')arr[i]=2;
        else if (str[i]=='o'||str[i]=='O')arr[i]=3;
        else if (str[i]=='w'||str[i]=='W')arr[i]=4;
        else 
        {
            f=10;
            break;
        }
       }
       if (f==10)
       {
        printf ("no\n");
        continue;
       }
       for(i=0;i<n-1&&arr[0]==1&&arr[n-1]==4;i++)
       {
        if (arr[i]==arr[i+1])f=1;
        else if (arr[i]+1==arr[i+1])f=1;
        else {
            f=0;
            break;
        }
       }
       if(f==1)printf ("yes\n");
       else printf ("no\n");
    }
}