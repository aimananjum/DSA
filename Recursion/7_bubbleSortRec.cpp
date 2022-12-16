#include <iostream>
using namespace std;
void printArray(int *a,int n){//printing array
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
void bubbleSortRecursive(int *arr,int n){
  if(n==0 || n==1) return;//already sorted

  for(int i=0;i<n-1;i++){//sort for one element
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  bubbleSortRecursive(arr,n-1);//recursive call handle for rest of the elements
}
int main() {
  //cout << "Hello World!\n";
  int arr[]={20,9,17,4,1,50};
  printArray(arr,6);
  bubbleSortRecursive(arr,6);
  printArray(arr,6);
}
