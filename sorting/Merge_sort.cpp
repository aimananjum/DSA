#include<iostream>

using namespace std;

void merge(int a[],int l,int mid,int h){
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	int b[h+1];
	while(i<=mid && j<=h){
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	for(;i<=mid;i++)
		b[k++]=a[i];
	
	for(;j<=h;j++)
		b[k++]=a[j];
	
	for (i =l ; i <= h; i++)
		a[i]=b[i];	

	return;
}
void mergesort(int a[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
	return;
}
int main(){
	//int a[]={12,19,31,13,77,24,98,16,25,10};
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,10);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}