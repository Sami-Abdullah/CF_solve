#include<bits/stdc++.h>
using namespace std;
int main (){
   int test;
   cin>>test;
   while(test--){
    int n,r,cnt=0, k=0;
    cin >>n>>r;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==1)continue;
      cnt+=(arr[i]/2)*2;
      r=r-arr[i]/2;
      arr[i]=arr[i]%2;
    }
    for(int i=0;i<n;i++){
      if(arr[i]==1)k++;
    }
   if(k!=0){
   if(k<=r)cnt+=k;
   else{
      cnt+=(r*2-k);
   }
   }
    cout<<cnt<<endl;
   }
}