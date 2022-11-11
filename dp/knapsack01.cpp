//knapsack01.cpp
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

//int t[10][20];


// int knapsack01(int wt[],int v[],int w,int n){
// 	if(w==0 || n==0){
// 		return 0;
// 	}
// 	if(t[n][w] != -1)
// 		return t[n][w];
// 	if(wt[n-1]<=w){
// 		return t[n][w]=max(v[n-1]+knapsack01(wt,v,w-wt[n-1],n-1), knapsack01(wt,v,w,n-1));
// 	}
// 	else{
// 		return t[n][w] = knapsack01(wt,v,w,n-1);
// 	}
// }

int knapsackitrative(int wt[],int v[],int w,int n){
	int t[n+1][w+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<w+1;j++){
			if(i==0 || j==0)
				t[i][j]=0;
			else if(wt[i-1]<=j){
					t[i][j]= max(v[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
				}
			else {
					t[i][j]=t[i-1][j];
				}
		}
	}
	return t[n][w];
}

int main(){
	int n;
	cin>>n;
	int wt[n],v[n],w;
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cin>>w;
	// memset(t,-1,sizeof(t));
	// int ans=knapsack01(wt,v,w,n);
	// cout<<ans<<endl;
	// for(int i=1;i<n+1;i++){
	// 	for(int j=1;j<w+1;j++){
	// 		cout<<t[i][j]<< " ";
	// 	}
	// 	cout<<endl;
	// }

	int ans=knapsackitrative(wt,v,w,n);
	// for(int i=0;i<n+1;i++){
	// 	for(int j=0;j<w+1;j++){
			
	// 		cout<<t[i][j]<<" " ;
	// 	}
	// 	cout<<endl;
	// }
	cout<<ans;

	return 0;
}
