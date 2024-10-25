#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;
    while(test--)
    {
        int arr[8],area;
        for(int i=0;i<8;i++) cin>> arr[i];

        for(int i=2;i<8;i=i+2)
        {
            if(arr[0]==arr[i]||arr[1]==arr[i+1])
            {
                if(arr[0]==arr[i]){
                    area=pow(arr[1]-arr[i+1],2);
                    break;
                }
                else{
                    area = pow(arr[0]-arr[i],2);
                    break;
                }
            }
        }
        cout << area<<endl;
    }
}