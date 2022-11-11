#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val){
		data=val;
		next  = NULL;
	}

};

void insetattail(node* &head,int data){
	node* n= new node(data);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next = n;
	return;
}

void insertathead(node* &head,int data){
	node* n = new node(data);
	n->next = head;
	head=n;
	return;
}

void insertatanyposition(node* &head,int data,int pos){
	node* n= new node(data);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	node* temp2=temp->next;
	while(temp!= NULL && pos-1>0){
		temp=temp->next;
		temp2=temp2->next;
		pos--;
	}
	temp->next=n;
	n->next=temp2;
	return;
}

void insertatspacifickey(node* &head,int data,int key){
	node* n= new node(data);

	if(head == NULL){
		head = n;
		return;
	}
	node* temp=head;
	node* temp2;
	while(temp!=NULL){
		if(temp->data == key){
			temp2=temp->next;
			break;
		}
	temp=temp->next;
	}
	temp->next=n;
	n->next=temp2;
	return;
}
void delAthead(node* &head){
	node* temp = head;
	head=head->next;
	delete temp;
	return;
}
void deletion(node* &head,int val){
	if(head==NULL){
		return;
	}
	node* temp = head;
	if(temp->next==NULL || temp->data == val){
		delAthead(head);
		return;
	}
	
	while(temp->next->data != val){
		temp=temp->next;
	}
	node* dele = temp->next;
	temp->next = temp->next->next;
	delete dele;
	return;
}

node* reverseLL(node* &head){
	node* pre;
	node* nxt;
	node* curr;
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		return head;
	}
	pre=NULL;
	curr=head;
	nxt=head->next;
	while(curr!=NULL){
		nxt=curr->next;

		curr->next=pre;

		pre=curr;

		curr=nxt;
	}
	return pre;
}
node* recreverse(node* &head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	node* newhead = recreverse(head->next);
	head->next->next=head;
	head->next=NULL;
	return newhead;
}

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
bool detectcycle(node* &head){
	node* slow=head;
	node* fast = head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}

void removecycle(node* &head){
	node* slow=head;
	node* fast = head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			fast=head;
			break;
		}
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next;
		if(fast->next==slow->next){
			slow->next=NULL;
			return;
		}
	}
	
}

void makecycle(node* &head,int pos){
	node* temp=head;
	for(int i=1;i<pos;i++){
		temp=temp->next;
	}
	node* temp2=head;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=temp;
}

node* merger(node* &h1,node* &h2){
	node* dumynode = new node(-1);
	node* p1=h1;
	node* p2=h2;
	node* p3=dumynode;

	while(p1!=NULL && p2!=NULL){
		if(p1->data<p2->data){
			p3->next=p1;
			p1=p1->next;
		}
		else{
			p3->next=p2;
			p2=p2->next;
		}
		p3=p3->next;
	}

	while(p1!=NULL){
		p3->next=p1;
		p1=p1->next;
		p3=p3->next;
	}
	while(p2!=NULL){
		p3->next=p2;
		p2=p2->next;
		p3=p3->next;
	}
return dumynode->next;
}

int main()
{
	node* head = NULL;
	insetattail(head,1);
	insetattail(head,12);
	insetattail(head,30);
	insetattail(head,44);
	insetattail(head,56);
	insetattail(head,62);
	insetattail(head,71);
	insetattail(head,81);	

	display(head);
//merge two LL
	cout<<endl;
	node* head2=NULL;
	insetattail(head2,1);
	insetattail(head2,12);
	insetattail(head2,36);
	insetattail(head2,45);
	insetattail(head2,52);
	insetattail(head2,68);

	display(head2);
//merge call
	node* mhead = merger(head,head2);
	display(mhead);


	// insertathead(head,12);
	// insertathead(head,1);
	// insertathead(head,1);
	// insertathead(head,1);

	//display(head);

	// insertatanyposition(head,55,2);
	// insertatanyposition(head,55,3);
	// insertatanyposition(head,55,4);
	// insertatanyposition(head,55,5);

	// display(head);

	//  insertatspacifickey(head,777,72);

	//  insertatspacifickey(head,10,12);

	//  insertatspacifickey(head,20,52);

	//  insertatspacifickey(head,30,777);

	//  insertatspacifickey(head,2000,1);
	// display(head);

	// // delAthead(head);
	// deletion(head,3);
	// display(head);
	// deletion(head,1);
	// display(head);
	// deletion(head,8);
	// display(head);
	// deletion(head,2);
	// display(head);

//reverse recursive	
	// node* newhead=recreverse(head);
	// display(newhead);
	
//reverse iterative	
	// node* newhead2=reverseLL(newhead);
	// display(newhead2);

//make cycle
	// makecycle(head,3);
	// //display(head);
	// cout<<detectcycle(head)<<endl;
	// removecycle(head);
	// display(head);

	
	return 0;
}




                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              