#include <iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(){
	int n,sum1=0,sum2=0,sum1sq=0,sum2sq=0;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum1+=(i+1);
		sum1sq+=pow(i+1,2);
		sum2+=a[i];
		sum2sq+=pow(a[i],2);
	}
	//cout<<sum1<<" "<<sum2;
	int be=abs(sum2-sum1);
	int besq=abs(sum2sq-sum1sq);
	int bpe=besq/be;
	int missing=(be+bpe)/2;
	int duplicate=bpe-missing;
	cout<<missing<<" "<<duplicate;
	return 0;
}