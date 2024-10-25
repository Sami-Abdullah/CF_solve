#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int size,n1=0,n0=0;
    cin >>size;
    string str;
    cin >>str;
    if(size==4)cout << "yes\n";
    else if(size <9)cout <<"no"<<endl;
    else 
    {
        for(int i=0;i<size;i++)
        {
            if(str[i]=='1')n1++;
            else n0++;
        }
        if(4+(4*sqrt(n0))==n1)cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
   
   } 
}