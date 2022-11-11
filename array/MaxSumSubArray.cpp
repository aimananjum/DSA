#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// int i,j,k;//O(n^3) worst approach
	// int maxSum=INT_MIN;
	// for(i=0;i<n;i++){
	// 	for(j=i;j<n;j++){
	// 		int sum=0;
	// 		for(k=i;k<=j;k++){
	// 			// cout<<a[k]<<" " ;
	// 			sum+=a[k];
	// 		}
	// 		// cout<<endl;
	// 		maxSum=max(sum,maxSum);
	// 	}
	// }
	// cout<<maxSum;

	//cummulative sum approach O(n^2) 
	// int cumarr[n+1],i,j;
	// cumarr[0]=0;
	// for(int i=1;i<=n;i++){
	// 	cumarr[i]=cumarr[i-1]+a[i-1];
	// }
	// int maxSum = INT_MIN;
	// for(i=1;i<=n;i++){
	// 	for(j=0;j<i;j++){
	// 		int sum=0;
	// 		sum=cumarr[i]-cumarr[j];
	// 		maxSum=max(sum,maxSum);
	// 	}
	// }
	// cout<<maxSum;

	//kadenc's algo O(n)

	int currentSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currentSum+=a[i];
		if(currentSum<0){
			currentSum=0;
		}
		maxSum=max(maxSum,currentSum);
	}
	cout<<maxSum;
}