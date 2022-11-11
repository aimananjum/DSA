#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 20;
	int c,res;

	cin>>c;
	switch(c){

		case 1:res=a+b;
				break;
		case 2:res=a*b;
				break;
		case 3:res=a-b;
				break;
		default:
		cout<<"Invalid case ";						

	}
	cout<<res;

}