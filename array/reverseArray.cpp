#include <iostream>
#include<stdlib.h>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a[5]={1,4,5,6,7};
	int i,j;
	for(i=0,j=4;i<j;i++,j--){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}