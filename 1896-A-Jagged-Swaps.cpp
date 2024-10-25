#include<stdio.h>
int main ()
{
    int test,n,i,temp,flag=0,k;
    scanf("%d",&test);
    while(test--)
    {
    scanf ("%d",&n);
    k=n-2;
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    while(k--)
    {
         for(i=1;i<n-1;i++)
    {
        if (arr[i-1]<arr[i]&&arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])flag=1;
        else {
            flag=2;
            break;
        }
    }
    }
    if (flag==1)printf("YES\n");
    else if(flag==2)printf("NO\n");
    flag=0;
  }
}