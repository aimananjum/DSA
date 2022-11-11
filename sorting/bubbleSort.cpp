#include <iostream>
using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x=*y;
	*y= temp;
}
void bubbleSort(int arr[],int n){
	int i,j;
	bool swapped;
	for(i=0;i<n-1;i++){
		swapped=false;
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			swap(&arr[j],&arr[j+1]);
			swapped=true;
			}
		}
		if(swapped==false)
		break;
	}
}

int main(){
	int arr[]={10,56,2,9,11,7,22,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	cout<<"Sorted Array is:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}