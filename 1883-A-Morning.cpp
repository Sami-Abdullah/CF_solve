#include<stdio.h>
int main ()
{
    int test,time=0,i,a,b,k;
    char c;
    scanf ("%d",&test);
    while(test--)
    {
      for(i=0;i<4;i++)
      {
        scanf(" %c",&c);
        a=c-'0';
        if (a==0)a=10;
        k=a-b;
        if(k<0)k=k*(-1);
        time=time+k+1;
        b=a;
      }
      printf("%d\n",time);
      time=0;
      b=1;
    }
}
