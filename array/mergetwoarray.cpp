#include <iostream>
using namespace std;

void mergeArray(int a[],int b[],int m,int n){
	int c[m+n];
	int i=0,j=0,k=0;
	while(i<m && j<n){
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	}
	for(;i<m;i++)
		c[k++]=a[i];
	for(;j<n;j++)
		c[k++]=b[j];
	for(int i=0;i<(m+n);i++)
		cout<<c[i]<<" ";
}
int main(){
	int a[]={2,6,9,12,13};
	int b[]={3,5,10,15,20};

	int m=5,n=5;
	mergeArray(a,b,m,n);

	return 0;
}