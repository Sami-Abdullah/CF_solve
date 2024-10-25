#include <iostream>
using namespace std;

int main(){
	int test; 
    cin >> test;
	while(test--){
		int n; 
        cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long long sum=0;
		int  max1=0,cnt=0;;
		for(int i = 0; i < n; i++){
			sum=sum+arr[i];
			max1=max(max1, arr[i]);
			if(sum-max1==max1) 
				cnt++;
		}
		cout <<cnt<<endl;
	}
}