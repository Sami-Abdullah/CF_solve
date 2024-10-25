#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int n,a,b,h,max=1440;
        cin >>n>>a>>b;
        a=a*60+b;
        for(int i=0;i<n;i++)
        {
            int c,d;
            cin >> c>>d;
            c=c*60+d;
            if(a>c)h=1440-(a-c);
            else if(a<c)h=(c-a);
            else h=0;
            if(max>h)max=h;
        }  
        cout<<max/60<<" "<<max%60<<"\n";  
    }
}