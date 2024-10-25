#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int member,size;
        cin >>member>>size;
        int n=member;
        string str1,str2;
        cin>>str1;
        if(member==1)cout<<"1\n";
        else{
            for(int i=0;i<member-1;i++)
            {
                cin >>str2;
                if(str1!=str2)n--;
            }
            cout<<n<<"\n";
        }
    }
}