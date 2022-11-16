#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  //0 1 2 3 4 5

  for(int i=0;i<n-1;i+=2){
    swap(a[i],a[i+1]);
  }
  
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
