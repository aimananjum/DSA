#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;

  int ans100=0,ans50=0,ans20=0,ans1=0;
  switch(1){
    case 1: if(n>100){
              ans100=n/100;
              n%=100;
              }
    case 2:if(n>50){
              ans50=n/50;
              n%=50;
              }
    case 3:if(n>20){
              ans20=n/20;
              n%=20;
              }
    case 4:if(n>1){
              ans1=n;
              n=0;
              }
  }
  cout<<ans100<<" "<<ans50<<" "<<ans20<<" "<<ans1;
  return 0;
}
