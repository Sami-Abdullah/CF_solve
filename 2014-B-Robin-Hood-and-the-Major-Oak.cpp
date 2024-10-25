#include<bits/stdc++.h>
using namespace std ;
int main (){
    int test;
    cin >>test;
    while(test--){
        int a ,b;
        cin>>a>>b;
        int start = ((a-b+1)%2==0) ? a-b+1+1:a-b+1;
        int end = (a%2==0) ? a-1: a;
        if((((end-start)/2)+1)%2==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    
}
}