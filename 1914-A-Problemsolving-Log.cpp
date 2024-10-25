#include<stdio.h>
int main ()

{
    int test,n,solve=0,i;
    int arr[26]={0};
    scanf ("%d",&test);
    while(test--)
    {
        scanf ("%d",&n);
        char str[n];
        scanf ("%s",str);
        for(i=0;i<n;i++)
        {
            if (str[i]>='A'&&str[i]<='Z')
            {
                arr[str[i]-'A']++;
            }
        }
        for (i=0;i<26;i++)
        {
            if(arr[i]>=i+1)solve++;
        }
        printf ("%d\n",solve);
        solve=0;
        
        for(i=0;i<26;i++)arr[i]=0;

    }
}