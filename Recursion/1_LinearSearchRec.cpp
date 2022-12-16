//Linear search using binary search
//O(n)-time :: O(n)-stack space
#include <iostream>
using namespace std;

bool linearSearch(int * arr,int n,int k){
  if(n==0) return false;
  if(arr[0]==k) return true;
  else{return linearSearch(arr+1,n-1,k);}
}
int main() {
  cout << "Hello World!\n";
  int arr[]={1,2,3,4,5};
  bool ans=linearSearch(arr,5,5);
  if(ans)cout<<"Found";
  else cout<<"Not Found";
  return 0;
}
