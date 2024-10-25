#include<stdio.h>
#include<string.h>
int main ()
{
    int test,a,b,i=0,j=0,max=0,min=9,lucky=0,l;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&a,&b);
        l=b;
        for(i=b;i>=a;i--)
        {
            char str[8];
            sprintf(str,"%d",i);
            for(j=0;j<strlen(str);j++)if(str[j]-'0'>max)max=str[j]-'0';
            for(j=0;j<strlen(str);j++)if(str[j]-'0'<min)min=str[j]-'0';
            if(lucky<max-min)lucky=max-min,l=i;
            max=0,min=9;
            if (lucky==9)break;
        }
        printf ("%d\n",l);
        lucky=0;
    }
}