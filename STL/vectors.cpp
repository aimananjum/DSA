#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

template<class T>
void display(vector<T> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void vectordemo(){
	vector<int> A ={10,50,60,7,1};
	cout<<A.size()<<endl;

	sort(A.begin(),A.end());//O(NlogN) sort
	display(A);

	//binary search in O(logN)
	bool p = binary_search(A.begin(),A.end(),7);
	cout<<"The Element 7 is present : "<<p<<endl;

	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);

	for(int &x : A){
		x++;
		cout<<x<<" ";
	}
	cout<<endl;
	display(A);

	vector<int> :: iterator itr1 =  lower_bound(A.begin(),A.end(),100);//>=
	vector<int> :: iterator itr2 =  upper_bound(A.begin(),A.end(),100);//>

	cout<<"The no of 100 in vectors are :"<<itr2-itr1<<endl;

	vector<char> v2(5);
	v2.push_back('a');
	v2.push_back('i');
	v2.push_back('m');
	v2.push_back('a');
	v2.push_back('n');

	sort(v2.begin(),v2.end());

	cout<<endl;
	display(v2);
	



	//creating vectors;
	vector<int> v1;
	cout<<"Enter no of elements :"<<endl;
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int ele;
		cout<<i+1<<" Element "<<endl;
		cin>>ele;
		v1.push_back(ele);
	}
	int a= (int)v1.size();
	for(int i=a-1;i>=0;i--){
		cout<<i<<" is "<<v1[i]<<endl;
	}
	cout<<endl;
	// v1.pop_back();
	// v1.pop_back();
	// a= (int)v1.size();
	// for(int i=a-1;i>=0;i--){
	// 	cout<<i<<" is "<<v1[i]<<endl;
	// }	
	vector<int> :: iterator iter = v1.end();
	v1.insert(iter,8,10);

	a= (int)v1.size();
	for(int i=a-1;i>=0;i--){
		cout<<i<<" is "<<v1[i]<<endl;
	}

}

int main(){

		return 0;
}