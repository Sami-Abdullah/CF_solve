#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a,b,c,d,len,wid,len2,wid2;
        cin>>a>>b>>c>>d;
        if(a>=b){
            len=a;
            wid=b;
        }
        else {
            len=b;
            wid=a;
        }
        if(c>=d){
            len2=c;
            wid2=d;
        }
        else
        {
            len2=d;
            wid2=c;
        }
        if(len==len2&&wid+wid2==len)cout<<"yes"<<endl;
        else cout << "no"<<endl;
    }
}