#include<stdio.h>
#include<string.h>
int main ()
{
    int test;
    scanf ("%d",&test);
    while(test--)
    {
        int a,b,arr[26]={0},odd=0;
        scanf("%d%d",&a,&b);
        char str[a];
        scanf("%s",str);
            for(int i=0;i<a;i++)arr[str[i]-'a']++;
            for(int i=0;i<26;i++)if (arr[i]%2!=0)odd++;
            if(odd>b+1)printf("NO\n");
            else printf("YES\n");

    }
}