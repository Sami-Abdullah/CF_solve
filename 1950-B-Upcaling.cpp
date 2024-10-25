#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str1="##",str2="..",str3,str4,str5;
        int n;
        cin >>n;
        for(int i=0;i<n;i++)
        {
            str3=str1;
            if (i%2!=0)str3=str2;
            str4=str4+str3;
        }
        for(int i=0;i<n;i++)
        {
            str3=str2;
            if (i%2!=0)str3=str1;
            str5=str5+str3;
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<str4<<"\n";
                cout<<str4<<"\n";
            }
            else
            {
               cout<<str5<<"\n";
               cout<<str5<<"\n";
            }
        }
    }
}