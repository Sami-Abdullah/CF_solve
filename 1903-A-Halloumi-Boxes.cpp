# include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size,len,temp=1;
        cin >>size>>len;
        bool check=true;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]>=temp) temp=arr[i];
            else check=false;
        }
        if(check==false&&len==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
}