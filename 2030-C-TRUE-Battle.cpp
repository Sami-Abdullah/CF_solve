#include<bits/stdc++.h>
using namespace std;
int main (){
   int test;
   cin >>test;
   while(test--){
       int size;
       cin>>size;
       string str ;
       cin >>str;
       bool alice=false;
       if (str[0]=='1'||str[size-1]=='1') cout<<"yes"<<endl;
       else{
         for(int i=0;i<size-1;i++){
            if(str[i]=='1'&&str[i+1]=='1'){
                alice =true;
                break;
            }
         }
         if(alice)cout<<"yes"<<endl;
         else cout<<"no"<<endl;
       }        
   }
}