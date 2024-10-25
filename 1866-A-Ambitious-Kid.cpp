
#include<stdio.h>
int main ()
{
    int n,min=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
        if(arr[i]<0)arr[i]=arr[i]*(-1);
    }
    min=arr[0];
    for (int i=0;i<n-1;i++)if(min>arr[i+1])min=arr[i+1];
    printf ("%d\n",min);   
}