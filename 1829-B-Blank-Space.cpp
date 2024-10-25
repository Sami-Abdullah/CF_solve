#include<stdio.h>
int main ()
{
    int t,size,sum=0,sum1=0,temp=0;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d",&size);
        int arr[size],i=0;
        for (i=0;i<size;i++)
        {
            scanf ("%d",&arr[i]);
        }
        for (i=0;i<size;i++)
        {
            if (arr[i]==0)temp++;
            else 
            {
                sum1=temp;
                temp=0;
                if (sum<sum1)sum=sum1;
            }
            
        }
        if (temp<sum)printf ("%d\n",sum);
        else printf ("%d\n",temp);
            sum=0;
            temp=0;
    }
}    