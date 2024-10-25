#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a=0,b;
        string str;
        cin>>str;
        for(int i=0;i<5;i++) if (str[i]=='A')a++;
        b=5-a;
        if(a>b)cout<<"A"<<"\n";
        else cout<<"B"<<"\n";
    }


}