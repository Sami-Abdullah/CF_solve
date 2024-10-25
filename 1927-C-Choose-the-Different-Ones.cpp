#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >>test;
    while(test--){
        int size1,size2,k,cnt1=0,cnt2=0;
        cin >>size1>>size2>>k;
        bool check=false;
        int a,arr1[k]={0},arr2[k]={0};
        for(int i=0;i<size1;i++){
            cin>>a;
            if(a<=k)arr1[a-1]++;
        }
        for(int i=0;i<size2;i++){
            cin >>a;
            if(a<=k)arr2[a-1]++;
        }
        for(int i=0;i<k;i++){
            if(arr1[i]>0)cnt1++;
            if (arr2[i]>0)cnt2++;
            arr1[i]=arr1[i]+arr2[i];
            if (arr1[i]==0){
                check=true;
                break;
            }
        }
        if (check)cout << "NO"<<endl;
        else {
            cout <<((cnt1>=k/2&&cnt2>=k/2)?"YES":"NO")<<endl;
        }
    }
}