#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str1,str2;
        cin>>str1>>str2;
        string a="",b="";

        int cnt;

         cnt =lcm(str2.size(),str1.size());
                for(int i=0;i<cnt/str2.size();i++)a=a+str2;
                for(int i=0;i<cnt/str1.size();i++)b=b+str1;
                if(a==b)cout<<a<<endl;
                else cout <<"-1"<<endl;
    }
}