#include<iostream>
#include<climits>
#include<vector>
#include <set>
#include<map>
#include<string>
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
void setdemo(){
	set<int> s;
	s.insert(10);
	s.insert(0);
	s.insert(-10);
	s.insert(-1);

	for (int x : s){
		cout<<x<<" ";
	}

	auto itr = s.find(10);//if present 2 else return s.end()
	if(itr==s.end()){
		cout<<"\nnot present";
	} 
	else{
		cout<<"present\n";
		cout<<*(itr)+1;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	auto it2= s.upper_bound(-1);
	auto it3 = s.lower_bound(-1);
	cout<<*it2<<" "<<*it3<<endl;

	auto it4 = s.upper_bound(10);
	cout<<*it4;

	cout<<endl;
	cout<<endl;
	s.erase(-10);
	for (int x : s){
		cout<<x<<" ";
	}
	
	set <int> s1;
	for(int i=0;i<5;i++){
		int a;
		cin>>a;
		s1.insert(a);
	}
	s1.erase(5);
	for (int x : s1){
		cout<<x<<" ";
	}

}

void mapdemo(){
	map<int,int> m;
	m[1] = 1;
	m[2] = 72;
	m[3] = 13;
	m[4] = 67;
	m[5] = 100;
	for(int i=1;i<=m.size();i++){
		cout<<m[i]<<" ";
	}

	map<char,int> cnt;
	string x="aiman Jamadar";
	for(char c : x){
		cnt[c]++;
	}
	cout<<endl;
	cout<<cnt['a']<<" "<<cnt['m']<<endl;

}

void powerOfSTL(){
	set<pair<int,int>> S;
	S.insert({2,3});
	S.insert({10,20});
	S.insert({401,450});
	S.insert({30,400});
	S.insert({4,9});

	int point= 4500;

	auto it = S.upper_bound({point,INT_MAX});
	if(it==S.begin()){
		cout<<"not present";
		return;
	}
	it--;
	pair<int,int> current = *it;
	if( current.first <= point && point<= current.second){
		cout<<"Yes it is present {"<<current.first<<","<<current.second<<"}\n"<<"point is "<<point<<endl;
	}
	else{
		cout<<"not present";
	}
}

int main(){

	//setdemo();
	powerOfSTL();
//	mapdemo();
	return 0;
}