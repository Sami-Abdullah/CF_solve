#include<stdio.h>
int main ()
{
    int test;
    scanf ("%d",&test);
    while(test--)
    {
        int a,b,c,k=0;
        scanf ("%d%d%d",&a,&b,&c);
        int arr1[a],arr2[b];
        for(int i=0;i<a;i++)scanf ("%d",&arr1[i]);
        for(int i=0;i<b;i++)scanf ("%d",&arr2[i]);
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(arr1[i]+arr2[j]<=c)k++;
            }
        }
        printf ("%d\n",k);   
    }
}