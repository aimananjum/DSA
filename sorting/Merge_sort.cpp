#include <iostream>
using namespace std;

void merge(int *a,int s,int e){
  int mid=s+(e-s)/2;
  int len1=mid-s+1;
  int len2=e-mid+1;
//creating two temp array
  int *arr1 = new int[len1];
  int *arr2 = new int[len2];

//aIdx is index of main array a
  int aIdx=s;
//copy all data till mid to arr1
  for(int i=0;i<len1;i++){
    arr1[i]=a[aIdx++];
  }
//copy all data after mid till end to arr2
  aIdx=mid+1;
  for(int i=0;i<len2;i++){
    arr2[i]=a[aIdx++];
  }
//start merging
  int idx1=0,idx2=0;
  aIdx=s;
//continue till any of the two list gets exhausted 
  while(idx1<len1 && idx2<len2){
    if(arr1[idx1]<arr2[idx2]){
      a[aIdx++]=arr1[idx1++];
    }
    else{
      a[aIdx++]=arr2[idx2++];
    }
  }
//fill up if elements remins in arr1
  while(idx1<len1){
    a[aIdx++]=arr1[idx1++];
  }
//fill up if elements remains in arr2
  while(idx2<len2){
    a[aIdx++]=arr2[idx2++];
  }
}

void mergeSort(int *arr,int s,int e){
//base condition	
  if(s>=e) return;
  int mid = s+(e-s)/2;

//dividing in two parts
  mergeSort(arr,s,mid);
  mergeSort(arr,mid+1, e);
//merging two sorted array;
  merge(arr,s,e);
}
int main() {
  int arr[]={14,52,100,50,80,60,158,23,69,2};
  mergeSort(arr,0,10);
  for(auto a:arr){
    cout<<a<<" ";
  }
  return 0;
}
