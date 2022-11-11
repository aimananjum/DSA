#include<bits/stdc++.h>

using namespace std;

int main(){
	int r1,n,r2,x,ans=0;
	cin>>r1>>n>>r2>>x;
		
	int hr= ceil(x/60.0);
	if(hr>n){
		ans=n*r1+(hr-n)*r2;
	}
	else{
		ans=n*r1;
	}
	cout<<ans;
	return 0;
}

// int main(){
// 	int n,k;
// 	cin>>n>>k;

// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	k=k%n;
// 	reverse(a,a+k);
// 	reverse(a+k,a+n);
// 	reverse(a,a+n);
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	vector<int> a(n);

// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		if(a[i]%10!=0){
// 			cout<<a[i]<<" ";
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(a[i]%10==0){
// 			cout<<a[i]<<" ";
// 		}
// 	}



// return 0;
// }

//int dp[30][50];

// int knapsack(int w[],int v[],int W,int n){
// 	if(W==0 || n==0){
// 		return 0;
// 	}
// 	if(dp[n][W]!=-1)
// 		return dp[n][W];
// 	if(w[n-1]>W){
// 		return dp[n][W]= knapsack(w,v,W,n-1);
// 	}
// 	if(w[n-1]<=W){
// 		return dp[n][W]=max(v[n-1]+knapsack(w,v,W-w[n-1],n-1),knapsack(w,v,W,n-1));
// 	}
// }

// int topdownKS(int w[],int v[],int W,int n){
// 	int dp[n+1][W+1];
// 	for(int i=0;i<n+1;i++){
// 		for(int j=0;j<W+1;j++){
// 			if(i==0 || j==0){
// 				dp[i][j]=0;
// 			}
// 		}
// 	}
// 	for(int i=1;i<n+1;i++){
// 		for(int j=1;j<W+1;j++){
// 			if(w[i-1]<=j){
// 				dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
// 			}
// 			if(w[i-1]>j){
// 				dp[i][j]=dp[i-1][j];
// 			}
// 		}
// 	}
// 	return dp[n][W];
	
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	// for(int i=0;i<30;i++){
// 	// 	for(int j=0;j<50;j++){
// 	// 		dp[i][j]=-1;
// 	// 	}
// 	// }

// 	int w[n],v[n];
// 	for(int i=0;i<n;i++){
// 		cin>>w[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		cin>>v[i];
// 	}
// 	int W;
// 	cin>>W;
// 	cout<<topdownKS(w,v,W,n);
// 	//cout<<knapsack(w,v,W,n);
// 	return 0;
// }