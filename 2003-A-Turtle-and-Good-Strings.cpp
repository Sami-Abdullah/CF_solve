
#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin>>size;
        string str;
        cin>>str;
        if(str[0]!=str[size-1])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}