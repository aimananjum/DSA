#include <iostream>
#include <queue>

using namespace std;

class Stack
{
	queue<int> q1;
	queue<int> q2;

public:
	void Push(int val){
		q2.push(val);
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> temp = q1;
		q1=q2;
		q2=temp;
	}
	void Pop(){
		q2.pop();
	}
	int Top(){
		return q2.front();
	}
	
};

int main(){

	Stack st;
	st.Push(1);
	st.Push(2);
	st.Push(3);
	st.Push(4);

	cout<<st.Top()<<endl;
	st.Pop();
	cout<<st.Top()<<endl;

//info about Q
	//queue<int> q1;
	// q1.push(1);
	// q1.push(2);
	// q1.push(3);
	// q1.push(4);
	// q1.push(5);	
	// q1.pop();
	// cout<<(q1.front())<<endl;


	return 0;
}