#include <iostream>
using namespace std;
bool pairSum(int a[],int n,int k){

	// for(int i=0;i<n-1;i++){//O(n^2)
	// 	for(int j=i+1;j<n;j++){
	// 		if(a[i]+a[j]==k){
	// 			cout<<i<<" "<<j<<endl;
	// 			return true;
	// 		}
	// 	}
	// }	
	// return false;

	//Sorted array********************************************O(n)
	int low=0;
	int high = n;

	while(low<high){
		if(a[low]+a[high]== k){
			cout<<low<<" "<<high<<endl;
			return true;
		}
		else if(a[low]+a[high]>k){
			high--;
		}
		else if(a[low]+a[high]<k){
			low++;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int k;
	cin>>k;

	cout<<pairSum(a,n-1,k)<<endl;
	
	return 0;
}