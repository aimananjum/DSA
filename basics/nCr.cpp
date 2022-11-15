#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  return fact;
}

int nCr(int n,int r){
  int numerator = factorial(n);
  int demominator = factorial(r)*factorial(n-r);

  int ans = numerator/demominator;
  return ans;
}

int main() {
  int n,r;
  cin>>n;
  cin>>r;

  int ans = nCr(n,r);
  cout<<ans;
  
  return 0;
}
