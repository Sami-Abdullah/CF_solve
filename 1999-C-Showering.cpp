#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int a,b,c,d,e,sum=0,f=0;
    cin >>a>>b>>c;
    for(int i=0;i<a;i++)
    {
        cin >>d>>e;
        if(d-sum>=b&f==0)
        {
            f=1;
        }
        sum=e;
    }
    if(c-e>=b)f=1;
    if (f)cout<< "yes"<<endl;
    else cout <<"no"<<endl;
   } 
}