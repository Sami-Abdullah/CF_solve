#include<stdio.h>
int main ()
{
    int test;
    scanf ("%d",&test);
    while(test--)
    {
        int arr[6];
        for(int i=0;i<6;i++)
        scanf("%d",&arr[i]);
        if(arr[0]==arr[2]||arr[0]==arr[4]||arr[2]==arr[4])
        {
            if(arr[1]==arr[3]||arr[1]==arr[5]||arr[3]==arr[5])
            printf ("NO\n");
            else printf ("YES\n");
        }
        else printf ("YES\n");

    }
}