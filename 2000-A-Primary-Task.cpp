#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >>test;
    while(test--){
        string x;
        cin >>x;
        string y="1";
        bool check= false;
        if(x.size()<2||x[0]!='1'||x[1]!='0')cout <<"NO"<<endl;
        else {
            for(int i=0;i<x.size()-1;i++){
                    y=y+'0';
            }
            int j=stoi(x);
            int k=stoi(y);
            j=j-k;
            y=to_string(j);
            if(y.size()<x.size()-2)cout <<"NO"<<endl;
            else{
                if(j>=2)cout <<"YES"<<endl;
                else cout <<"NO"<<endl;
            }
        }
    }
}