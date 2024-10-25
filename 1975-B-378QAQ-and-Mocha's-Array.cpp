#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >>test;
    while(test--){
        int size,k=0;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        bool check=true;
        sort(arr,arr+size);
 
        for(int i=1;i<size;i++){
            if(arr[i]%arr[0]!=0){
                if(k==0)k=arr[i];
                if (arr[i]%k!=0)
                    {
                        check=false;
                        break;
                    }
            }
        }
        if(check)cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
}