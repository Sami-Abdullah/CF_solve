  #include<bits/stdc++.h>
using namespace std;
int main (){
   int test;
   cin >>test;
   while(test--){
       int size;
       cin>>size;
       int arr[size];
       for(int i=0;i<size;i++)cin>>arr[i];
       int max=arr[0],min=arr[0],cnt=0;
       for(int i=1;i<size;i++){
            if(arr[i]<=min)min=arr[i];
            if(arr[i]>=max)max=arr[i];
       }
        cnt= (size-1)*(max-min);
        cout<<cnt<<endl;
   }
}  