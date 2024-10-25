#include<stdio.h>
int main ()
{
   long long a;
   scanf ("%lld",&a);
    int n=0;
    while (a!=0)
        {
          if(a%10==4||a%10==7)
          {
              n++;
          }
          a=a/10;
        }
        if (n==4||n==7)
        {
            printf("YES\n");
        }
        else
            {
                printf("NO\n");
        }
}