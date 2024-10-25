#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        bool check1=false,check2=false;
        cin>> size;
        int max,temp1,temp2,temp3=-1,temp4;
        cin>>temp1;
        temp4=temp1;
        max=temp1;
        cout<<1;
        for(int i=1;i<size;i++)
        {
            cin >>temp2;
           if(temp1<=temp2&&check1==false)
           {
            temp1=temp2;
            max=temp1;
            cout<<1;
           }
           else 
           {
            check1=true;
           if(temp2>=temp3&&temp2<=temp4)
           {
            cout<<1;
            temp3=temp2;
            check2=true;
           }
           else if(check2==false && max<=temp2&&check1==true)
           {
            cout<<1;
            max=temp2;
           }
           else cout<<0;
           }
        }
        cout<<endl;
    }
}