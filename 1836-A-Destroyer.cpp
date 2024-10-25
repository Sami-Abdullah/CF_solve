#include<stdio.h>
int main ()
{
    int test,n,i,c,f=0;
    scanf ("%d",&test);
    while(test--)
    {
        int arr[100]={0};
        scanf ("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&c);
            arr[c]++;
        }
        for(i=0;i<99;i++)
        {
          if(arr[i]>=arr[i+1])f=1;
          else 
          {
            f=0;
            break;
          }
        }
        if (f==1)printf("YES\n");
        else printf("NO\n");
        f=0;
    }
}
