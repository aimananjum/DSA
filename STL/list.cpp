#include <iostream>
#include<list>
#include<algorithm>

using namespace std;

template<class T> 
void display(list<T> &lst){
	
	for(int i : lst){
		cout<<i<<" ";
	}
}
int main(){
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);	
	l1.push_back(60);
	// // l1.reverse();
	// // list<int> :: iterator it=l1.begin();
	// // it++;
	// // it++;
	// // l1.erase(it);
	// int i=binary_search(l1.begin(),l1.end(),30);
	// cout<<i<<endl;
	// display(l1);cout<<endl;

	list<int> l2;
	cout<<"ENter The No of Elements :"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter Element "<<i+1<<" ";
		int ele;
		cin>>ele;
		l2.push_back(ele);
	}cout<<endl;
	display(l1);cout<<endl;

	display(l2);
	cout<<endl;
	l2.merge(l1);
	display(l2);
	return 0;
}