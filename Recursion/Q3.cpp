#include<iostream>
#include<vector>

using namespace std;

int main(){
int n;
	cin>>n;

	vector<int> a;
	vector<int> b;
	vector<int> c;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	for(int i=0;i<n;i++){
		if(a[i]%10==0){
			b.push_back(a[i]);
		}
		else{
			c.push_back(a[i]);
		}
	}
for(int i=0;i<n;i++){
		cout<<a[i];
	}
	for(int i=0;i<b.size();i++){
		cout<<b[i];
	}
	return 0;
}