#include <iostream>
#include<string>
#include <string.h>
#include<vector>
#include<algorithm>
#include<stack>
#include <stdlib.h>
#include<cmath>

using namespace std;


// void swap(int *x,int *y){
// 	int temp = *x;
// 	*x=*y;
// 	*y= temp;
// }
// int bubbleSort(int arr[],int n){
// 	int i,j,count=0;
// 	bool swapped;
// 	for(i=0;i<n-1;i++){
// 		swapped=false;
// 		for(j=0;j<n-i-1;j++){
// 			if(arr[j]>arr[j+1]){
// 			swap(&arr[j],&arr[j+1]);
// 			count++;
// 			swapped=true;
// 			}
// 		}
// 		if(swapped==false)
// 		break;
// 	}
// 	return count;
// }

// int main()
// {	int k,n;
// 	cin>>k;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];


// 	int bribe = bubbleSort(a,5);
// 	if(bribe<k)
// 	cout<<bribe;
// 	else
// 		cout<<"Too Chaios";
// 	return 0;
// }


// string decodedString(int n,string s){
// 	int sz=s.size();
// 	cout<<sz;
// 	// int col= sz/n;
// 	// cout<<col;
// 	return "a";
//}

// int main(){
// 	// int n;
// 	// string s;
// 	// cin>>n;
// 	// cin>>s;
// 	// string res=decodedString(n,s);
// 	// //cout<<res;

// 	string s;
// 	getline(cin,s);
// 	//2021 mar 05th
// 	//2021-03-05
// 	string y="";
// 	for(int i=0;i<4;i++){
// 		y+=s[i];
// 	}
// 	string m="";
// 	for(int j=5;j<8;j++){
// 		m+=s[j];
// 	}
// 	string d="";
// 	for(int k=9;k<11;k++){
// 		d+=s[k];
// 	}
	
// 	string mon="";
// 	if(m[0]=='j' && m[1]=='a' && m[2]=='n'){
// 		mon+="01";
// 	}
// 	else if(m[0]=='f' && m[1]=='e' && m[2]=='b'){
// 		mon+="02";
// 	}
// 	else if(m[0]=='m' && m[1]=='a' && m[2]=='r'){
// 		mon+="03";
// 	}
// 	else if(m[0]=='a' && m[1]=='p' && m[2]=='r'){
// 		mon+="04";
// 	}
// 	else if(m[0]=='m' && m[1]=='a' && m[2]=='y'){
// 		mon+="05";
// 	}
// 	else if(m[0]=='j' && m[1]=='u' && m[2]=='n'){
// 		mon+="06";
// 	}
// 	else if(m[0]=='j' && m[1]=='u' && m[2]=='l'){
// 		mon+="07";
// 	}
// 	else if(m[0]=='a' && m[1]=='u' && m[2]=='g'){
// 		mon+="08";
// 	}
// 	else if(m[0]=='s' && m[1]=='e' && m[2]=='p'){
// 		mon+="09";
// 	}
// 	else if(m[0]=='o' && m[1]=='c' && m[2]=='t'){
// 		mon+="10";
// 	}
// 	else if(m[0]=='n' && m[1]=='o' && m[2]=='v'){
// 		mon+="11";
// 	}
// 	else if(m[0]=='d' && m[1]=='e' && m[2]=='c'){
// 		mon+="12";
// 	}
	
// 	string finalstr="";
// 	y+="-";
// 	mon+="-";
// 	finalstr+=y+mon+d;
// 	cout<<finalstr;
// 	return 0;
// }


// bool isAdjacent(char k[3][3],char curr,char p){
// 	int r=0;
// 	int c=0;
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			if(k[i][j]==p){
// 				r=i;
// 				c=j;
// 				break;
// 			}
// 		}
// 	}
// 	//up
// 	if(r>0 && k[r-1][c]==curr){
// 		return true;
// 	}
// 	//down
// 	else if(r<2 && k[r+1][c]==curr){
// 		return true;
// 	}
// 	//right
// 	else if(c<2 && k[r][c+1]==curr){
// 		return true;
// 	}
// 	//left
// 	else if(c>0 && k[r][c-1]==curr){
// 		return true;
// 	}
// 	//up left
// 	else if(c>0 && r>0 && k[r-1][c-1]==curr){
// 		return true;
// 	}
// 	//up right
// 	else if(r>0 && c<2 && k[r-1][c+1]==curr){
// 		return true;
// 	}
// 	//down left
// 	else if(r<2 && c>0 && k[r+1][c-1]==curr){
// 		return true;
// 	}
// 	//down right
// 	else if(r<2 && c>2 && k[r+1][c+1]==curr){
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}
// }


// int entryTime(string s,string keypad){
// 	int res=0;
// 	char k[3][3];
// 	int p=0;
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			k[i][j]=keypad[p];
// 			p++;
// 		}
// 	}

// 	char prv=s[0];
// 	for(int i=1;i<s.size();i++){
// 		char curr = s[i];
// 		if(prv==curr){
// 			res+=0;
// 		}
// 		else if(isAdjacent(k,curr,prv)){
// 			res+=1;
// 		}
// 		else{
// 			res+=2;
// 		}
// 		prv=curr;
// 	}
// 	return res;
// }
// int main(){

// string s,keypad;
// cin>>s;

// // 423692
// // 923857614
// //
// cin>>keypad;

// int res = entryTime(s,keypad);
// cout<<res;
// }


// int main(){
// 	int k1,n;
// 	cin>>k1;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}

// 	int k=1;
// 	int b[n];
// 	for(int i=n-1;i>0;i--){
// 		if(a[i]==a[i-1]){
// 			b[i]=b[i-1]=k;
// 			k++;k++;
// 		}
// 		else{
// 		b[i]=k;
// 		k++;}
// 		if(i-1 == 0 && a[i-1]!=a[i]){
// 		b[i-1]=k;
// 	   }
// 	}
	
// 	int c=0;
// 	for(int i=0;i<n;i++){

// 		if(b[i] <= k1){
// 			c++;
// 		}
// 	}cout<<endl;

// 	cout<<c;

// 	return 0;
// }



// int commandPosition(int n,vector<string> s){

// 	int mat[n][n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j < n; j++)
// 		{
// 			mat[i][j]=(i*n)+j;
// 		}
// 	}
// 	int i=0,j=0;
// 	for (int p = 0; p < s.size(); p++)
// 	{
// 		if(j<n-1 && j>=0 && s[p]=="right"){
// 			j+=1;
// 			cout<<i<<" "<<j<<" "<<mat[i][j]<<" \n";
// 		}
// 		else if(i<n-1 && i>=0 && s[p]=="down"){
// 			i+=1;
// 			cout<<i<<" "<<j<<" "<<mat[i][j]<<" \n";
// 		}
// 		else if(j>0 && j<n && s[p]=="left"){
// 			j--;
// 			cout<<i<<" "<<j<<" "<<mat[i][j]<<" \n";
// 		}
// 		else if(i>0 && i<n && s[p]=="up"){
// 			i--;
// 			cout<<i<<" "<<j<<" "<<mat[i][j]<<" \n";
// 		}
// 	}
// 	return mat[i][j];

// 	return 0;
// }

// int main()
// {
// 	int n;
// 	cin>>n;

// 	vector<string> s;
// 	int c1;
// 	cin>>c1;
// 	cout<<"Enter Commands size \n";
// 	for(int i=0;i<c1;i++){
// 		string ele;
// 		cin>>ele;
// 		s.push_back(ele);
// 	}

// 	int res =commandPosition(n,s);
// 	cout<<res;
// 	return 0;
// }



// int main(){
// 	int n;
// 	cin>>n;
// 	string name[n];	//O(N^2)
// 	for(int i=0;i<n;i++){
// 		cin>>name[i];
// 	}

// 	int price[n];
// 	for(int i=0;i<n;i++){
// 		cin>>price[i];
// 	}
// 	int weight[n];
// 	for(int i=0;i<n;i++){
// 		cin>>weight[i];
// 	}
// 	// const char *name[5]={"ball","box","ball","ball","box"};
// 	// int price[]={2,2,2,2,2};
// 	// int weight[]={1,2,1,1,1};
// 	int c=0;
// 	int x=234;
// 	for(int i=0;i<n-1;i++){
// 		for(int j=i+1;j<n;j++){
// 			int cmp=name[i].compare(name[j]);
// 			if(cmp==0){
// 				if(price[i]==price[j]){
// 					if(weight[i]==weight[j]){
// 						c++;
// 					}
// 				}
// 			}
// 			if(c>0){
// 				x++;
// 				price[j]=x;
// 			}
// 		}
// 	}
// 	cout<<"duplicates are :"<<c<<endl;;

// }