#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >>test;
    while(test--){
        int size;
        cin>>size;
        vector <int> v(size);
        for(int i=0;i<size;i++){
            cin>>v[i];
        }
        for(int i=0;i<size;i++){
            if(v[i]==size)v[i]=1;
            else{
                v[i]=v[i]%size+1;
            }
        }
        for(int i=0;i<size;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}