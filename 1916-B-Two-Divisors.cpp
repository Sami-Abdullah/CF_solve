#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--){
        int a,b;
        cin>>a>>b;
        int i=1;
       while(1)
       {
            if(i<=a||i>=b)
            {
                if(a*i!=b&&a*i%b==0)
                {
                    if((a*i)/b>=b||(a*i)/b<=a)
                    {
                    cout<<a*i<<endl;
                    break;
                    }
            
                }
            }
        i++;
       }  
    }
}