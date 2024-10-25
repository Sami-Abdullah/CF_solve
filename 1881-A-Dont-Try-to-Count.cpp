#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size1,size2,i;
        cin >> size1>>size2;
        string str1,str2,str3;
        cin >>str1>>str2;
        auto k=str1.find(str2);
        if (k!=string::npos)cout<<"0"<<endl;
        else 
        {
            for( i=0;i<5;i++)
            {
                str1=str1+str1;
                 k= str1.find(str2);
                if (k!=string::npos)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
            if (i==5)cout<<"-1"<<endl;
        }
    }
    
}