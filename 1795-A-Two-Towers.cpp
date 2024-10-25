#include<stdio.h>
#include<string.h>

int main ()
{
   int test,a,b,i,count=0;
   scanf("%d",&test);
   while(test--)
   {
    scanf ("%d%d",&a,&b);
    char str1[a+b],str2[b];
    scanf ("%s%s",str1,str2);
    strrev(str2);
    strcat(str1,str2);
    for(i=0;i<a+b;i++)if (str1[i]==str1[i+1])count++;

        if (count==1||count==0)printf("Yes\n");
        else printf ("No\n");
        count=0;
   }
}