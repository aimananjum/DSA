#include <iostream>
using namespace std;
int getbit(int n,int pos){
	return (((1<<pos) & n)!= 0); 
}
int setBit(int n,int pos){
	return ((1<<pos)|n);
}
int unSetBit(int n,int pos){
	return ((~(1<<pos)) & n);
}
int updateBit(int n,int pos,int val){
	if(val==1){
		return setBit(n,pos);
	}
	else{
		return unSetBit(n,pos);
	}
}
int chkPowerOfTwo(int n){
	if((n & (n-1)) == 0){
		cout<<"it is in power of two";
		return 1;
	}
	else{
		cout<<"notin power of two";
		return 0;
	}
}
int countNoOfOnes(int n){
	int count=0;
	while(n){
		n=n&(n-1);
		count++;
	}
	return count;
}
int XorSum(int a[],int n){
	int xorsum = 0;
	for(int i =0;i<n;i++){
		xorsum = xorsum ^ a[i];
	}
	return xorsum;
}
void twoUnique(int a[],int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum = xorsum ^ a[i];
	}
	int tempxor=xorsum;
	int setbit=0;
	int pos=0;
	while(setbit != 1){
		setbit=xorsum & 1;
		pos++;
		xorsum=xorsum>>1;
	}
	int newxorsum=0;
	for(int i=0;i<n;i++){
		if(getbit(a[i],pos-1)){
			newxorsum= newxorsum^a[i];
		}
	}
	cout<<newxorsum<<endl;
	cout<<(tempxor^newxorsum)<<endl;
}
int main(){
	//int n,pos,val;
	//cin>>n>>pos>>val;

	//cout<<getbit(n,pos);
	//cout<<setBit(n,pos);
	//cout<<unSetBit(n,pos);
	//cout<<updateBit(n,pos,val);
	//cout<<chkPowerOfTwo(n);
	//cout<<countNoOfOnes(127);

	// 1<<n --> 2^n
	//cout<<(1<<10)<<endl;
	////////////////////////////////////all subsets
	// int n=4;
	// int a[n]={1,2,3,4};
	// for(int i = 0; i<(1<<n) ; i++){
	// 	for(int j=0;j<n;j++){
	// 		if(i&(1<<j)){
	// 			cout<<a[j]<<" ";
	// 		}
	// 	}cout<<endl;
	// }

	// int a[]={1,1,2,2,3,4,4,5,5,6,6,7,7};
	//cout<<XorSum(a,13);

	int a[]={1,2,3,1,2,3,5,7};
	twoUnique(a,8);
	return 0;
}
