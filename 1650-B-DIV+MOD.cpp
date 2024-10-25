#include <bits/stdc++.h>
using namespace std;
int main() {
   int test;
   cin >>test;
   while(test--)
   {
    int a,b,c,k;
    cin >>a>>b>>c;
     k=(b/c)*c;
     if(a<=k-1&&k-1<=b)
     {
      if((k-1)/c+(k-1)%c>=b/c+b%c)cout<<(k-1)/c+(k-1)%c<<"\n";
      else cout<<b/c+b%c<<"\n";
     }
     else cout<<b/c+b%c<<"\n";
   }
}