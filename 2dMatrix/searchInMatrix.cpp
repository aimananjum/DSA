//matrix is sorted 
//two pointer

#include <iostream>
using namespace std;

int main(){
	int n,m,target;

	cin>>n>>m>>target;

	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	int s=m-1,l=0;
	bool ans=false;
	while(s>=0 && l<n){
		if(a[l][s] == target){
			ans = true;
			break;
		}
		if(a[l][s]>target){
			s--;
		}
		else if(a[l][s]<target){
			l++;
		}
	}
	if(ans){
		cout<<"Element Found at : "<<l+1<<" "<<s+1;
		cout<<endl;
	}
	else{
		cout<<"Element Not Found";
		cout<<endl;
	}
	return 0;
}
