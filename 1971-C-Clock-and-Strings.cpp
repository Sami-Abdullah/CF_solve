#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,c,d,max1,min1,max2,min2;
        cin >>a>>b>>c>>d;
        if(a>b)max1=a,min1=b;
        else max1=b,min1=a;
        if(c>d)max2=c,min2=d;
        else max2=d,min2=c;

        if(max2>max1)
        {
            if(min2<max1&&min2>min1)cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(max2<max1)
        {
            if(min2<min1&&min1<max2)cout<<"yes\n";
            else cout<<"no\n";
        }
        else cout<<"no\n"; 
    }
}