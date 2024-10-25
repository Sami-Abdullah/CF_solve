#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >>test;
    while(test--)
    {
        int n,j=0;
        cin >>n;
        string str;
        cin>> str;
       
        for(int i=0;i<n;i++) if(str[i]=='U')j++;

            if(j%2==0)cout<<"NO\n";
            else cout<<"YES\n";

    }
}