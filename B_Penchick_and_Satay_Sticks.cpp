#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >>test;
   while(test--)
   {
    int size;
    cin >>size;
    vector<int> v1(size);
    for(int i=0;i<size;i++) cin >> v1[i];

        bool check;
        vector<int> v2=v1;
        sort (v2.begin(),v2.end());
        
        for(int i=0;i<size;i++)
        {
            if (v2[i]==v1[i])check=true;
            else if(v2[i]==v1[i+1]){

                if (v1[i]-v1[i+1]==1)
                {swap(v1[i],v1[i+1]);
                check = true;}
                else {
                    check =false;
                    break;
                }
            }
            else if(v2[i]==v1[i-1]){

                if (v1[i-1]-v1[i]==1)
                {swap(v1[i],v1[i-1]);
                check = true;}
                else {
                    check =false;
                    break;
                }
            }
            else {
                check =false;
                break;
            }
        }
        if(check)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}