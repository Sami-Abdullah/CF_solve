#include<stdio.h>
#include<string.h>
int main ()
{
     int t,l,count,i,j=0,f=0,c=0,k;
     scanf ("%d",&t);
     while(t--)
     {
        scanf ("%d",&l);
        char str[l],str1[l-2][3],str2[]="11";
        count=l-1;
        scanf("%s",str);
        for( i=0;i<=l-2;i++)
        {
            str1[i][0]=str[i];
            str1[i][1]=str[i+1];
            str1[i][2]='\0';
        }
        for (i=0;i<=l-2;i++)
        {
           for (j=i+1;j<=l-2;j++)
           {
               k=strcmp(str1[i],str1[j]);
               if (k==0&&str1[j][0]!='1')
               {
                   count=count-1;
                   f=1;
                   str1[j][0]='1';
               }

           }
        }
        if (f==0)printf ("%d\n",l-1);
        else printf ("%d\n",count);
     }
}