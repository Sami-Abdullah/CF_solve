#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {   
        string str;
        cin >>str;
        int cnt1=0,cnt0=0;
        for(int i=0;i<str.size();i++)
        {
            if (str[i]=='1')cnt1++;
            else cnt0++;
        }

            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='1'){
                    if(cnt0)cnt0--;
                    else break;
                }
                else{
                    if(cnt1)cnt1--;
                    else break;
                }
            }
            cout<<cnt1+cnt0<<endl;
        
    }
}