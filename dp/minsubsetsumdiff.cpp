#include <bits/stdc++.h>
using namespace std;

vector<int> subsetsum(int a[],int sum,int n){
	vector<int> b;
	bool t[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		t[i][0]=1;
	}
	for(int i=1;i<sum+1;i++){
		t[0][i]=0;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(a[i-1]<=j){
				t[i][j]=(t[i-1][j] || t[i-1][j-a[i-1]]);
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	
	for(int i=0;i<=(sum)/2;i++){
		if(t[n][i]==1){
			b.push_back(i);
		}
	}
	
return b;
}


int minsubsetsumdiff(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	vector<int> p=subsetsum(a,sum,n);
	
	int mn=INT_MAX;
	for(int i=0;i<p.size();i++){
		mn=min(mn,sum-(2*p[i]));
		//cout<<mn<<endl;
	}
	return mn;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=minsubsetsumdiff(a,n);
	cout<<ans;
	return 0;
}