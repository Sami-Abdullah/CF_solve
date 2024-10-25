#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    string str="codeforces";
    while (test--)
    {
        int f=0;
        char a;
        cin >>a;
        for (int i=0;i<str.size();i++)
        {
            if (str[i]==a)
            {
                f=1;
                break;
            }
        }
        if (f==1)cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }
}