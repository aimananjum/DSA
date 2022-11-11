#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){

	map<string,int> m1;
	m1["Aiman"] = 98;
	m1["Aiman"]=98;
	m1["Aiman"]=77;
	m1["vhjvjv"]=66;
	map<string,int> :: iterator iter;
	for(iter=m1.begin();iter!=m1.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}

	return 0;
}