#include <iostream>
using namespace std;
void printArray(int *a,int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void insertionSortRec(int *arr,int i,int n){
  if(i==n) return;
  int temp=arr[i];
  int j=i;
  for(;j>=0;j--){
    if(arr[j-1]>temp){
      arr[j]=arr[j-1];
    }
    else{
      break;
    }
  }
  arr[j]=temp;
  return insertionSortRec(arr,i+1,n);
}
int main() {

  int arr[]={20,9,17,84,1,50};
  printArray(arr,6);
  //selectionSortRecursive(arr,0,6);
  insertionSortRec(arr,1,6);
  printArray(arr,6);
}
