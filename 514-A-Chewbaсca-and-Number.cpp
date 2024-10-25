#include<bits/stdc++.h>
using namespace std;
int main (){
    string str;
    cin>>str;
    bool check =true;
    for(int i=0;i<str.size();i++){
        if (str[0]=='9'&&check){
                check=false;
            }
        else{
             if(str[i]-'0'>'4'-'0')str[i]='9'-str[i]+'0';
        }
        
    }
    
    cout <<str<<endl;
}