#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int sum,int n){
	bool t[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0)
				t[i][j]=false;
			else if(j==0)
				t[i][j]=true;
			else if(a[i-1]<=sum){
				t[i][j]=(t[i-1][j-a[i-1]] || t[i-1][j]);
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][sum];
}

bool equalpartition(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%2!=0){
		return false;
	}
	else{
		return subsetsum(a,sum/2,n);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	bool ans=equalpartition(a,n);
	cout<<ans;
	return 0;
}