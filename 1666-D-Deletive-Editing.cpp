#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        int check=-1;
        string str1,str2,str3;
        cin>>str1>>str2;
        int arr1[30]={0},arr2[30]={0};
        for(int i=0;i<str2.size();i++)arr2[str2[i]-65]++;

        for(int i=str1.size()-1;i!=-1;i--)
        {
            if(arr1[str1[i]-65]<arr2[str1[i]-65]){
                arr1[str1[i]-65]++;
                str3=str3+str1[i];
            }
        }
        reverse(str3.begin(), str3.end());
        
       
        if(str2==str3)cout << "yes"<<endl;
        else cout << "no"<<endl;  
    }
}