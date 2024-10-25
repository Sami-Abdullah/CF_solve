#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int a,b,sum=0;
    cin >>a>>b;
    sum=a+(b*2);
    if(a==0&&b%2!=0)cout <<"no"<<endl;
   else if(sum%2==0)cout <<"yes"<<endl;
   else cout <<"no"<<endl;

   
   } 
}