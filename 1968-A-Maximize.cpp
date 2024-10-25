#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >>test;
    while(test--)
    {
        int a,k,sum=0;
        cin >>a;
        for(int i=1;i<a;i++)
        {
            for(int j=0;j<i;j++)
            {
                if (a%(j+1)==0&&i%(j+1)==0&&i>sum)sum=i;
            } 
        }
        cout <<sum<<"\n";
    }
}