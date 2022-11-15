#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Convert binary to decimal"<<endl;
  int n;
  cin>>n;
  int ans=0,i=0;
  while(n!=0){
    int digit = n%10;//extracting last digit bcoz input is in integer
    if(digit == 1){
      ans=(digit * pow(2,i))+ans;
    }
    i++;
    n/=10;
  }
  cout<<ans;
}
