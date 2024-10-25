#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,a,b;
        cin>>n>>a>>b;
       int Min=min(a,b);
 
            if(n%Min!=0) cout<<(n/Min)+1<<endl;
            else cout<<n/Min<<endl;
    }
}