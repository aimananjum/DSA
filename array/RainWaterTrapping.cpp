#include <iostream>
using namespace std;

int main(){
	// int n;
	// cin>>n;

	int a[6]={2,3,0,1,2,3};
	// for(int i=0;i<n;i++)
	// 	cin>>a[i];

	int left[6];
	left[0]=a[0];
	for(int i=1;i<6;i++){
		left[i]=max(left[i-1],a[i]);
	}
	int right[6];
	right[6-1]=a[6-1];
	for(int i=6-2;i>=0;i--){
		right[i]=max(right[i+1],a[i]);
	}
	int ans=0;
	for(int i=0;i<6;i++){
		ans += min(left[i],right[i])-a[i];
	}
	cout<<ans<<endl;
}
/*
   2  3   0  1  2  3   
   	  __          __
   __|__|      __|__|
  |__|__|	__|__|__|
  |__|__|__|__|__|__|
lf 2  3  3  3  3  3
rt 3  3  3  3  3  3

min 2  3 3  3  3  3
-
a[i]2  3 0  1  2  3
    0  0 3  2  1  0

     3+2+1=6

     6 is the answer

*/