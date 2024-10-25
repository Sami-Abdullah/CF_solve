#include<stdio.h>
int main ()
{
    int test,x,y,k,t,max,min;
    scanf("%d",&test);
    while(test--)
    {
        scanf ("%d%d%d",&x,&y,&k);
      if(x<y)
      {
        if(x+k==y)printf("%d\n",y);
        else if(x+k>y)printf("%d\n",y);
        else printf("%d\n",x+k+2*(y-x-k));
      }
      else printf("%d\n",x);    
    }
}