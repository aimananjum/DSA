#include<bits/stdc++.h>
#include<string>
using namespace std;

//
// int main(){
// 	string str ="500";
// 	string b="707";
// 	int n=str.length(),ans=1,n2=b.length();
// 	if(n<n2){
// 		cout<<"-1";
// 	}
// 	else if(n>n2){
// 		sort(str.begin(),str.end());
// 		cout<<str;
// 	}
// 	else{

// 	for(int i=1;i<=n;i++){
// 		ans*=i;
// 	}
// 	string a[ans];
	
// 	sort(str.begin(),str.end());
// 	// if(str[n-1]>=b[0]){
// 	// 	cout<<"-1";
// 	// }
// 	int i=0;
// 	do{
// 		a[i]=str;
// 		i++;

// 	}while(next_permutation(str.begin(),str.end()));
	
// 	for(int i=0;i<ans;i++){
// 		if(a[i]>b){

// 			cout<<a[i]<<endl;
// 			break;
// 		}
// 	}
   
// }
// 	return 0;
// }

// bottle neck
// int maxcount(int a[],int n){
// 	unordered_map<int,int> hash;
// 	for(int i=0;i<n;i++){
// 		hash[a[i]]++;
// 	}
// 	int max=0;
// 	for(auto i: hash){
// 		if(max<i.second){
// 			max=i.second;
// 		}
// 	}
// 	return max;
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	cout<<maxcount(a,n);
// }
// return 0;
// }
map<char,int> mp;
bool cmp(char a, char b){
	cout<<mp[a]<<" "<<mp[b]<<endl;
	return mp[a]<mp[b];
}
int main(){
	
	string s,s1;
	cin>>s>>s1;
	vector<int> a;
	// for(int i=0;i<s.length();i++){
	// 	mp[s[i]]=i;
	// }
	// map<char,int> :: iterator itr;
	// for( itr=mp.begin();itr!=mp.end();itr++){
	// 	cout<<itr->first<<" = "<<itr->second<<endl;
	// }
	// sort(s1.begin(),s1.end(),cmp);
	//cout<<s1;
	for(int i=0;i<s1.length();i++){
		size_t f = s.find(s1[i]);
		if(f!=string::npos)
			a.push_back(f);
	}
	sort(a.begin(),a.end());

	for(int i=0;i<s1.length();i++){
		cout<<s[a[i]];
	}
	return 0;
}


// polikujmnhytgbvfredcxswqaz
// abcd