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
        if(size<4){
            swap(v[0],v[1]);
        }
        else{
            for(int i=2;i<size-2;i=i+2){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=0;i<size;i++)cout<<v[i]<<" ";
        cout<<endl;

    }
}