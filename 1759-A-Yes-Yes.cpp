#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    string str="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    cin >> test;
    while(test--)
    {
        string str1;
        cin >> str1;
        auto k=str.find(str1);
        if (k!=string::npos)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}