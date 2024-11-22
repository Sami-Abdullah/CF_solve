#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--){
        int size;
        cin >> size;
        string str;
        cin >> str;
        int cnt1=0;
        bool check=false;
        for(int i=0;i<size-1;i++){
            if(str[i]=='1')cnt1++;
            if(str[i]==str[i+1]&&str[i]=='1')check=true;
        }
        if(str[size-1]=='1')cnt1++;

        if(cnt1==0)cout<<"yes"<<endl;
        else if(cnt1%2!=0)cout<<"no"<<endl;
        else if (cnt1==2&&check)cout<<"no"<<endl;
        else if (cnt1%2==0)cout<<"yes"<<endl;
        else if (cnt1==size)cout<<"yes"<<endl;    
    }
}