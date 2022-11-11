#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int sum,int n){
	bool t[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0){
				t[i][j]=false;
			}
			else if(j==0){
				t[i][j]=true;
			}
			else if(a[i-1]<=j){
				t[i][j]=(t[i-1][j-a[i-1]] || t[i-1][j]);
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			cout<<t[i][j]<<" ";
		}cout<<endl;
	}
	return t[n][sum];
}

int main(){
	int n;
	cin>>n;
	int a[n],sum;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>sum;
	bool ans=subsetsum(a,sum,n);
	cout<<ans;
	return 0;
}