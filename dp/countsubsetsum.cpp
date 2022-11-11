#include <bits/stdc++.h>
using namespace std;

int countsubsetsum(int a[],int n,int sum){
	int t[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		t[i][0]=1;
	}
	for(int i=1;i<sum+1;i++){
		t[0][i]=0;
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(a[i-1]<=j){
				t[i][j]=t[i-1][j]+t[i-1][j-a[i-1]];
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][sum];
}

int main(){
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>sum;
	int ans=countsubsetsum(a,n,sum);
	cout<<ans;
	return 0;
}