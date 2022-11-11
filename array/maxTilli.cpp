#include<iostream>
using namespace std;

int main(){//O(n) maximum and minimum of array
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxtilli=0,minTilli=a[0];
	for(int i=0;i<n;i++){
		maxtilli=max(a[i],maxtilli);
		minTilli=min(a[i],minTilli);
		//cout<<maxtilli<<endl;
	}
		cout<<maxtilli<<endl;
		cout<<minTilli<<endl;
}