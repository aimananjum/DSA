#include <algorithm>
#include <iostream>
#include<string.h>
using namespace std;
int main(){
	//string s1="fam",s2="ily";
	//s1.append(s2);
	// cout<<s2.compare(s1);

	// s1.clear();
	// if(!s2.empty()){
	// 	cout<<"string is not empty";
// //	}
// string s ="786";
// int a=stoi(s);
// cout<<a+2;
// int a=786;
// cout<<to_string(a)+"2";
//
//string s1="sdADArgFuiGyrNS";
// sort(s1.begin(),s1.end());
// cout<<s1;
// for(int i=0;i<s1.size();i++){
// 	if(s1[i]>='A' && s1[i]<='Z'){
// 		s1[i]+=32;
// 	}
// }
// transform(s1.begin(),s1.end(),s1.begin(),::toupper);
// cout<<s1;

// string s1="8921463";
// sort(s1.begin(),s1.end(),greater<int>());
// cout<<s1;

string s="anjndaaaaaaaaa";
int freq[26];
for(int i=0;i<26;i++){
	freq[i]=0;
}
for(int i=0;i<s.size();i++){
	freq[s[i]-'a']++;
}
string ans="";
int maxF=0;
for(int i=0;i<26;i++){
	if(freq[i]>maxF){
		maxF=freq[i];
		ans = i+'a';
	}
}
cout<<maxF<<" "<<ans<<endl;
}