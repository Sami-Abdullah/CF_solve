#include <stdio.h>
int main() 
{
   int a[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
   int test,i=0,j=0,sum=0;
   scanf("%d",&test);
   char C;
   while(test--)
   {

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf(" %c",&C);
            if(C=='X')sum=sum+a[i][j];
        }
    }
    printf ("%d\n",sum);
    sum=0;
   }
}