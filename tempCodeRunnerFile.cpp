#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,pos;
    cin>>size>>pos;
    vector<pair<int, int>> v(size);
    
    for(int i=0;i<size;i++){
        cin >>v[i].first>>v[i].second;
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size-1;j++)
        {
            if (v[i].first<=v[j].first)
            {
                if(v[i].second>=v[j].second)
                {
                swap(v[i].first,v[j].first);
                swap(v[i].second,v[j].second);
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<size;i++){
        if(v[i]==v[pos-1]) cnt++;
    }

    cout<<cnt<<endl;

}