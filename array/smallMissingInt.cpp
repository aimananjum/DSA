#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin>>a[i];
	const int N = 100;
	bool idx[N];

	for(int i=0;i<N;i++){
		idx[i]=0;
	}
	int ans=-1;
	for (int i = 0; i < n; i++)
	{
		if(a[i]>=0){
			idx[a[i]]=1;
		}
	}
	for(int i=1;i<N;i++){
		if(idx[i]==false){
			ans = i;
			break;
		}
	}
	cout<<ans<<endl;
}