//Binary Search Using Recursion
//O(logn) time :: space O(logn) stack
int binarySearch(int *arr,int s,int e,int k){
  if(s>e) return -1;
  int mid=s+(e-s)/2;
  if(arr[mid]==k) return mid;
  else if(arr[mid]<k)
    return binarySearch(arr,mid+1,e,k);
  else
    return binarySearch(arr,s,mid-1,k);   
}
int main() {
  cout << "Hello World!\n";
  int arr[]={1,2,3,4,5};
  int ans = binarySearch(arr,0,5,18);
  cout<<ans;
  return 0;
}
