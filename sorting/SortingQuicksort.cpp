#include <iostream>
using namespace std;

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int a[],int l,int h){
	int pivot=a[l];
	int i=l,j=h;
	do{
		do{
			i++;
		}while(a[i]<= pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j){
			swap(&a[i],&a[j]);
		}
	}while(i<j);
	swap(&a[l],&a[j]);

	return j;
}
void QuickSort(int a[],int l,int h){
	int j;
	if(l<h){
		j=partition(a,l,h);
		QuickSort(a,l,j);
		QuickSort(a,j+1,h);
	}
}
int main(){
	int a[]={7,3,1,9,2,4,8,5,6,10};
	int i;
	QuickSort(a,0,9);
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";

	return 0;
}
