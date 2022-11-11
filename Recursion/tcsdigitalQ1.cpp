#include <iostream>
#include <string>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int knapsack(int w[],int v[],int W,int n){
	if(W==0 || n==0){
		return 0;
	}
	if(w[n-1]>W){
		return knapsack(w,v,W,n-1);
	}
	if(w[n-1]<=W){
		return max(v[n-1]+knapsack(w,v,W-w[n-1],n-1),knapsack(w,v,W,n-1));
	}
}

int main(){
	int n;
	cin>>n;

	int w[n],v[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int W;
	cin>>W;
	cout<<knapsack(w,v,W,n);
}


// int main(){
// 	int n,k,c=0;
// 	cin>>n>>k;
// 	int a[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	sort(a,a+n);
// 	int i=0,j=n-1;
// 	while(j>=0 && i<n){
// 		int diff=a[j]-a[i];
// 		if(diff==k){
// 			c++;
// 			i++; 
// 			j--;
// 		}
// 		else if(diff>k){
// 			j--;
// 		}
// 		else {
// 			i++;
// 		}
// 	}
// 	cout<<c;

// 	return 0;
// }

// bool cmp(pair<int,int> a,pair<int,int> b){
// 	double v1 = a.first/a.second;
// 	double v2 = b.first/b.second;
// 	return v1>v2;
// }

// //fractional knap sack
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<pair<int,int>> a(n);
// 	for(int i=0;i<n;i++){
// 		cin>>a[i].first>>a[i].second;
// 	}
// 	int w;
// 	cin>>w;

// 	sort(a.begin(),a.end(),cmp);
// 	// for(int i=0;i<n;i++){
// 	// 	cout<<a[i].first<<" "<<a[i].second<<endl;
// 	// }
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		if(w>=a[i].second){
// 			ans+=a[i].first;
// 			w-=a[i].second;
// 			continue;
// 		}
// 		double vpw=(double)a[i].first/a[i].second;
// 		ans+=vpw*w;
// 		w=0;
// 		break;
// 	}

// 	cout<<ans;

// 	return 0;
// }


// //expedi --- train arival and depart
// int main(){
// 	int n,p=1,maxsum=1,i=1,j=0;
// 	cin>>n;
// 	int a[n],d[n];
// 	for(int k=0;k<n;k++)
// 		cin>>a[k];
// 	for(int k=0;k<n;k++)
// 		cin>>d[k];
// 	sort(a,a+n);
// 	sort(d,d+n);
// 	while(i<n && j<n){
// 		if(a[i]<=d[j]){
// 			p++;
// 			i++;
// 		}
// 		else if(a[i]>d[j]){
// 			p--;
// 			j++;
// 		}
// 		if(p>maxsum){
// 			maxsum=p;
// 		}
// 	}
// 	cout<<maxsum;
// 	return 0;
// }

//activity selecton problem
// bool cmp(pair<int,int> a,pair<int,int> b){
// 	return a.second<b.second;
// }
// int main(){
// 	int n,c=1;
// 	cin>>n;
// 	vector<pair<int,int>> p(n);
// 	for(int i=0;i<n;i++){
// 		cin>>p[i].first>>p[i].second;
// 	}
// 	sort(p.begin(),p.end(),cmp);
// 	int end=p[0].second;
// 	for(int i=1;i<n;i++){
// 		if(p[i].first>=end){
// 			c++;
// 			end=p[i].second;
// 		}
// 	}
// 	cout<<c;
// 	return 0;
// }

// //coin change problems;
// int main(){
// 	int n,k,co=0;
// 	cin>>n>>k;
// 	int a[k];
// 	for(int i=0;i<k;i++){
// 		cin>>a[i];
// 	}
// 	sort(a,a+k,greater<int>());
// 	for(int i=0;i<k;i++){
// 		co+=n/a[i];
// 		n=n-n/a[i]*a[i];
// 	}
// 	cout<<co;
// 	return 0;
// }



//optimal merge pattern
// int main(){

// 	int n,sum=0;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	sort(a,a+n);
// 	for(int i=0;i<n-1;i+=2){
// 		sum+=a[i]+a[i+1];
// 	}
// 	cout<<sum;
// }


//min max diffre
// int main(){

// 	int n,mx=0,mn=0;
// 	cin>>n;
// 	vector<int> a(n);
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	sort(a.begin(),a.end());
// 	for(int i=0;i<n/2;i++){
// 		mx+=(a[n/2+i]-a[i]);
// 		mn+=(a[2*i+1]-a[2*i]);
// 	}
// cout<<mn<<" "<<mx<<endl;
// 	return 0;
// }


//stair case problems 1 2 3 steps he can take
// int main(){

// 	int n;
// 	cin>>n;

// 	int dp[n+1]={0};
// 	dp[0]=0;
// 	dp[1]=1;
// 	dp[2]=2;
// 	dp[3]=4;
// 	for(int i=4;i<=n;i++){
// 		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
// 	}
// 	cout<<dp[n];

// 	return 0;
// }

//all sub matrix sum
// int main(){
// 	int n,k;
// 	cin>>n>>k;

// 	int a[n][n],b[k][k]={0};
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	for(int l=0;l<n-k+1;l++){
// 		for(int m=0;m<n-k+1;m++){
// 			int sum=0;
		
// 				for(int i=l;i<k+l;i++){
// 					for(int j=m;j<k+m;j++){
// 						sum+=a[i][j];
// 					}
// 				}
			  
			
// 			//cout<<sum<<" ";
// 			b[l][m]=sum;
// 		}
// 	}
// 	cout<<endl;
// 	for(int i=0;i<k;i++){
// 		for(int j=0;j<k;j++){
// 			cout<<b[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}

// 	return 0;
// }


//reverse array by k times;
// int main(){

// 	int n,k;
// 	cin>>n>>k;
// 	k=k%n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	cin>>a[i];
	
// 	reverse(a,a+k);
// 	reverse(a+k,a+n);
// 	reverse(a,a+n);
// 	for(int i=0;i<n;i++)
// 	cout<<a[i]<<" ";

// 	return 0;
// }

// int main(){
// 	int n,k;
// 	cin>>n>>k;

// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	queue<int> q;
// 	queue<int> q1;
// 	for(int i=0;i<n;i++){
// 		q.push(a[i]);
// 	}
// 	for(int i=0;i<k;i++){
// 		int b= q.front();
// 		q.pop();
// 		q.push(b);
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<q.front();
// 		q.pop();
// 	}
	
// 	return 0;
// }

// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n][n],b[n+1][n+1]={0};
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	int colsum=0,rowsum=0;
// 	for(int i=0;i<n;i++){
// 		colsum+=a[i][0];
// 		b[i][0]=colsum;
// 	}
// 	for(int j=0;j<n;j++){
// 		rowsum+=a[0][j];
// 		b[0][j]=rowsum;
// 	}
// 	for(int i=1;i<n;i++){
// 		for(int j=1;j<n;j++){
// 			b[i][j]=a[i][j]+(b[i-1][j]+b[i][j-1])-b[i-1][j-1];
// 		}
// 	}
// 	int maxsum=0;
	
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			int sum=0;
// 			if(i-k>=0 && j-k>=0){
// 				sum=b[i][j]-b[i-k][j]-b[i][j-k]+b[i-k][j-k];
// 				maxsum=max(sum,maxsum); 
			
// 			}
			
// 		}
// 	}

// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<b[i][j]<<" ";
// 		}cout<<endl;
// 	}cout<<endl;

// 	cout<<endl;
// 	cout<<maxsum;
// return 0;
// }

// int main(){
// 	// A B 2-1
// 	// B C 3-4
// 	// A C 2-3
// 	int teams;
// 	cin>>teams;
// 	string str;
// 	getline(cin,str);
// 	int scores[teams]={0};
// 	for(int i=1;i<=(teams*(teams-1))/2;i++){
// 		string matchinfo;
// 		getline(cin,matchinfo);
// 		char home=matchinfo[0];
// 		char away=matchinfo[2];

// 		string homesc="";
// 		string awaysc="";

// 		int j=4;
// 		while(matchinfo[j]!='-'){
// 			homesc+=matchinfo[j];
// 			j++;
// 		}
// 		int x = stoi(homesc);
// 		j++;
// 		while(j<matchinfo.length()){
// 			awaysc+=matchinfo[j];
// 			j++;
// 		}
// 		int y=stoi(awaysc);

// 		if(x<y){
// 			scores[away-'A']+=3;
// 		}
// 		else if(x==y){
// 			scores[home-'A']+=1;
// 			scores[away-'A']+=1;
// 		}
// 		else{
// 			scores[home-'A']+=3;
// 		}

// 	}
// 	int idx=-1;
// 	int maxv=0;
// 	for(int i=0;i<teams;i++){
// 		cout<<scores[i]<<" "<<endl;
// 		if(scores[i]>maxv){
// 			maxv=scores[i];
// 			idx=i;
// 		}
// 	}
// 	cout<<char('A'+idx)<<" "<<maxv;
// 	return 0;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<n<<endl;
// 	int a[10],j=0;
// 	if(n<10){
// 		n=n+10;
// 		cout<<n<<endl;
// 		return 0;
// 	}
// 	for(int i=9;i>1;i--){
// 		while(n%i==0){
// 			n=n/i; 
// 			a[j]=i; 
// 			j++;
// 		}
// 	}
// 	if(n>10){
// 		cout<<"Not Possible";
// 		return 0;
// 	}
// 	for(int i=j-1;i>=0;i--){
// 		cout<<a[i];
// 	}
	
// 	return 0;
// }