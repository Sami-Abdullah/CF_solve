#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test,i;
    cin >> test;
    while(test--)
    {
        int size1,size2,k=0,i;
        bool check=false;
        cin >>size1>>size2;
        string str1,str2;
        cin>>str1>>str2;
        for( i=0;i<size1;i++)
        {
            for(int j=k;j<size2;j++)
            {
                if(str1[i]==str2[j])
                {
                    check=true;
                    k=j+1;
                    break;
                }
            }
            if(check==false)break;
            check=false;
        }
        cout << i<<endl;
    }
}