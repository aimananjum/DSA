#include <iostream>
using namespace std;

void dec(int n){
	if(n==0){
		cout<<"0"<<" ";
		return;
	}
	cout<<n<<" ";
	dec(n-1);
}
void inc(int n){
	if(n<0){
		return;
	}
	inc(n-1);
	cout<<n<<" ";
}
int main(){

	int a[]={1,2,5,2,4,2,6};
	int key;
	cin>>key;
	for(int i=0;i<7;i++){
		if(a[i]==key){
			cout<<a[i]<<i;
			break;
		}
	}
	for(int i=6;i>=0;i--){
		if(a[i]==key){
			cout<<a[i]<<i;
			break;
		}
	}


	//inc and dec till n
	// int n;
	// cin>>n;
	// dec(n);
	// cout<<endl;
	// inc(n);


	// int a[]={1,2,3,4,5,6,7,8,9,10};
	// int j=1;
	// int f=1;
	// int i=0;
	// for(i=0;i<9;i++){
	// 	if(a[i]>a[j]){
	// 		f=0;
	// 		break;
	// 	}
	// 	j++;
	// }



	//using Recursion

	// bool isSorted(int a,int n){
	// 	if(n==1){
	// 		return 1;
	// 	}
	// 	bool restArray = isSorted(a+1,n);
	// 	return (a[0]<[1] && restArray);
	// }

	// if(f==1){
	// 	cout<<"sorted";
	// }
	// else{
	// 	cout<<"not sorted";
	// }
	// bool res=isSorted(a,10);
	// cout<<res;
	
	return 0;
}