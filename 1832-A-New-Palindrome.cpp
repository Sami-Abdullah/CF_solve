#include<stdio.h>
#include<string.h>
int main ()
{
          int test,k=0,j=0;
          char str[51],temp,a[51],b[51];
          scanf ("%d",&test);
          while(test--)
          {
            scanf("%s",str);
            strcpy(b,str);
            int len =strlen(str);
            for(int i=0;i<len/2;i++)
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                temp=str[len-i-1];
                str[len-i-1]=str[len-i-2];
                str[len-i-2]=temp;
              strcpy(a,str);
              strrev(str);
              k=strcmp(a,str);
              if(k==0)
              {
                j=strcmp(b,str);
                if(j!=0)break;
              }
            }
            if(j!=0)printf("yes\n");
            else printf ("No\n");
          }

}