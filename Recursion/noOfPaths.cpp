
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countNoOfPaths(int n,int m){
	if(n==1 || m==1){
		return 1;
	}
	return countNoOfPaths(n-1,m)+countNoOfPaths(n,m-1);
}

int josephus(int n,int k){
	if(n==1){
		return 0;
	}
	return (josephus(n-1,k)+k)%n;
}

bool threeSum(vector<int> a,int target){
	
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
		int lo=1,hi=a.size()-1;
		while(lo<hi){
			int sum = a[i]+a[lo]+a[hi];
			if(sum==target){
				return true;
			}
			else if(sum<target){
				lo++;
			}
			else if(sum>target){
				hi--;
			}
		}
	}
	return false;
}

int main(){
	//cout<<countNoOfPaths(4,2);
	//cout<<josephus(5,3);
	int n,t;
	cin>>n>>t;
	vector<int> a(n);
	for(int &i:a){
		cin>>i;
	}
	cout<<threeSum(a,t);
	return 0;
}