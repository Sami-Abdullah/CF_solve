#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test;
   cin >> test;
   while(test--)
   {
    long long a;
    cin>>a;
    if (a<=6){cout<<"15"<<"\n";
    continue;}else if (a<=8){cout<<"20"<<"\n";
    continue;}else if (a<=10){cout<<"25"<<"\n";
    continue;}
    if (a%2!=0)a=a+1;

    long long k=a*2.5;

    cout<<k<<"\n";
    
    
   }
}