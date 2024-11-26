#include<bits/stdc++.h>
using namespace std;
const int mx = 5e3+123;
int arr[mx];
int main()
{
        int size;
        cin>>size;
        map<int ,int> v;
        for(int i=0;i<size;i++)
        {
            
            cin >> arr[i];
            v[arr[i]]++;
        }
        int ans =0;
        for(int i=0;i<size;i++){
            ans =max(ans,v[arr[i]]);
        }
        cout << ans <<endl;


        
}