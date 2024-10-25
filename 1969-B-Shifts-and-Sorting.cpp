#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >>test;
    while(test--){
        string str;
        cin>>str;
        long long cnt=0, l,r;
        for(l=0;l<str.size();l++){
            if(str[l]=='1')break;
            }
 
        for(r=l+1;r<str.size();r++){
            if(str[r]=='0'){
                swap(str[l],str[r]);
                cnt = cnt + r - l + 1;
                l++;
            }
        }
        cout <<cnt <<endl;
    }
}