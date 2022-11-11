#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int precedence(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*' || c=='/'){
		return 2;
	}
	else if(c=='+' || c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}

string infixTOpostfix(string s){

	stack<char> st;
	string res;

	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
			res+=s[i];
		}
		else if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				res+=st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			while(!st.empty() && precedence(st.top())>precedence(s[i])){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){ 
		res+=st.top();
		st.pop();
	}

	return res;
}

string infixTOprefix(string s){
	string rev="";
	for(int i=s.length()-1;i>=0;i--){
		rev+=s[i];
	}
	int i=0;
	while(i!=rev.length()){
		if(rev[i]==')'){
			rev[i]='(';
		}
		else if(rev[i]=='('){
			rev[i]=')';
		}
		i++;
	}
	string ans=infixTOpostfix(rev);
	string rev2="";
	for(int i=ans.length()-1;i>=0;i--){
		rev2+=ans[i];
	}
	return rev2;
}

bool isvalid(string s){
	int n=s.length();
	stack<char> st;
	bool ans=true;
	for(int i=0;i<n;i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty() && st.top()=='('){
				st.pop();
			}
			else{
				ans=false;
				return false;
			}
		}
		else if(s[i]=='}'){
			if(!st.empty() && st.top()=='{'){ 
				st.pop();
			}
			else{
				ans=false;
				return false;
			}
		}
		else if(s[i]==']'){
			if(!st.empty() && st.top()=='['){
				st.pop();
			}
			else{
				ans=false;
				return false;
			}
		}
		
	}
	if(!st.empty()){
			return false;
		}
	return true;
}

class Q{
public:
	stack<int> s1;
	stack<int> s2;
	int enqueue(int val){
		s1.push(val);
	}
	int dequeue(){
		if(s1.empty() && s2.empty()){
			cout<<"empty";
			return -1;
		}
		if(s2.empty()){
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
		int topval = s2.top();
			s2.pop();
			return topval;
	} 
};

class Q2{
public:
	stack<int> s1;
	int enqueue2(int val){
		s1.push(val);
	}
	int dequeue2(){
		if(s1.empty()){
			cout<<"empty";
			return -1 ;
		}
		int topval=s1.top();
		s1.pop();
		if(s1.empty()){
			return topval;
		}
		int item = dequeue2();
		s1.push(topval);
		return item;
	}
};

int main(){
	// cout<<infixTOpostfix("(a-b/c)*(a/k-l)")<<endl;
	// cout<<infixTOprefix("(a-b/c)*(a/k-l)")<<endl;

//balanced para
	// string s="{([()])}";
	// if(isvalid(s)){
	// 	cout<<"Valid string";
	// }
	// else{
	// 	cout<<"Invalid string";
	// }

//queue using two stack
	// Q q;
	// q.enqueue(1);
	// q.enqueue(2);
	// q.enqueue(3);
	// q.enqueue(4);
	// cout<<q.dequeue()<<endl;
	// q.enqueue(5);
	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl<<endl;

//queue using only one stack
	Q2 q;
	q.enqueue2(1);
	q.enqueue2(2);
	q.enqueue2(3);	
	q.enqueue2(4);
	cout<<q.dequeue2()<<endl;
	q.enqueue2(5);
	cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;
		cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;
	cout<<q.dequeue2()<<endl;


	return 0;
}


// void reversesentence(string s){
// 	stack<string> st;

// 	for(int i=0;i<s.length();i++){
// 		string word="";
// 		while(s[i]!=' ' && i<s.length()){
// 			word+=s[i];
// 			i++;
// 		}
// 		st.push(word);
// 	}
// 	while(!st.empty()){
// 		cout<<st.top()<<" ";
// 		st.pop();
// 	}
// }

// int main(){
// 	string s="AIMAN ANJUM EHTESHYAM HUSEN JAMADAR";
// 	reversesentence(s);
// 	return 0;
// }