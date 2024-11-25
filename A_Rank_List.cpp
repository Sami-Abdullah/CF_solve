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
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++)
        {
            if (v[j].first<v[j+1].first)
            {
                swap(v[j].first,v[j+1].first);
                swap(v[j].second,v[j+1].second);  
            }
            else if(v[j].first==v[j+1].first){
                if(v[j].second>v[j+1].second){
                swap(v[j].first,v[j+1].first);
                swap(v[j].second,v[j+1].second);
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