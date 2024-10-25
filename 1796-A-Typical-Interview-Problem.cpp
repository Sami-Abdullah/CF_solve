#include<stdio.h>
#include<string.h>
int main ()
{
    int test,j=0,i,n,k=0,f;
    char str1[]="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        char *p=NULL;
        p=strstr(str1,str);
        if (p==NULL)printf ("NO\n");
        else printf("YES\n");
        
    }
}