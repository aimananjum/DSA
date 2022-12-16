#include <iostream>
using namespace std;
void printArray(int *a,int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void selectionSortRecursive(int * arr,int i,int n){
  if(i==n-1) return;//Base condition

  int minIdx=i;
  for(int j=i+1;j<n;j++){
    if(arr[j]<arr[minIdx]){//find minimum element index
      minIdx=j;
    }
  }
  swap(arr[i],arr[minIdx]);//swap with starting element
  return selectionSortRecursive(arr,i+1,n);//rec call
}
int main() {

  int arr[]={20,9,17,4,1,50};
  printArray(arr,6);

  selectionSortRecursive(arr,0,6);
  printArray(arr,6);
}
