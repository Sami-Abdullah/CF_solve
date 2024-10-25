#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int size,value;
        bool check=false;
        cin >> size>>value;
        int arr[size];
        for(int i=0;i<size;i++)cin>>arr[i];
        for(int i=0;i<size;i++)
        {
            if (arr[i]==value)
            {
                check= true;
                break;
            }
        }
        if(check)cout<<"yes"<<endl;
        else cout << "no"<<endl;
    }
}