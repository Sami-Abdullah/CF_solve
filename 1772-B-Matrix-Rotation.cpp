#include<stdio.h>
int main ()
{
    int test,i,j,arr[2][2],max=1,a,b;
    scanf("%d",&test);
    while(test--)
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf ("%d",&arr[i][j]);
                if(arr[i][j]>max)a=i,b=j;
            }
        }
        
            if(arr[0][0]>arr[0][1]&&arr[0][0]>arr[1][0]&&arr[1][0]>arr[1][1]&&arr[0][1]>arr[1][1])
            printf ("YES\n");
            else if(arr[1][0]>arr[0][0]&&arr[1][0]>arr[1][1]&&arr[0][0]>arr[0][1]&&arr[1][1]>arr[0][1])
            printf("YES\n");
            else if(arr[1][1]>arr[0][1]&&arr[1][1]>arr[1][0]&&arr[1][0]>arr[0][0]&&arr[0][1]>arr[0][0])
            printf ("YES\n");
            else if(arr[0][1]>arr[0][0]&&arr[0][1]>arr[1][1]&&arr[0][0]>arr[1][0]&&arr[1][1]>arr[1][0])
            printf ("YES\n");
            else printf ("NO\n");
    }
}