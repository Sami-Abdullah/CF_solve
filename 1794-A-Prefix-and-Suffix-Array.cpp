#include<stdio.h>
#include<string.h>
int main ()
{
    int test,n,cnt=0;
    scanf ("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        char str1[n+1],str2[n],str3[n];
        for(int i=0;i<n+n-2;i++)
        {
            scanf("%s",str1);
            if(n-1==strlen(str1))
            {
                cnt++;
                if(cnt==1)strcpy(str2,str1);
                else if (cnt==2)strcpy(str3,str1);
            }
        }
       strrev(str3);
        int k=strcmp(str2,str3);
        if(k==0)printf ("YES\n");
        else printf ("NO\n");
        cnt=0;
    }
}