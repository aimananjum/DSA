#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Convert Decimal to binary"<<endl;
  int n;
  cin>>n;
  int ans=0,i=0;
  string ans2="";
  while(n!=0){
    int bit = n & 1;
    n=n>>1;
    ans = (bit * pow(10,i))+ans;
    i++;
  }
  cout<<ans;
}
