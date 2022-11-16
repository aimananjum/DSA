#include<bits/stdc++.h>
using namespace std;
int AP(int n){
  return 3*n+7;
}
int setBits(int a){
  int ans=0;
  while(a!=0){
    int bit = a & 1;
    if(bit==1){
      ans++;
    }
    a>>=1;
  }
  return ans;
}
int nthFibo(int n){
  //0 1 1 2 3 5 8 13 21 -- series
  //1 2 3 4 5 6 7  8 9 --- index
  int a=0,b=1,c;
  for(int i=1;i<n-1;i++){
    c=a+b;
    a=b;
    b=c;
  }
  return c;  
}
int main() {
  //AP nth term
  int n;
  cin>>n;
  cout<<AP(n);

  //calulate number of set bits
  int a,b;
  cin>>a>>b;
  cout<<setBits(a)+setBits(b);

  //nth fibonacci number
  int num;
  cin>>num;
  cout<<nthFibo(num);
}
