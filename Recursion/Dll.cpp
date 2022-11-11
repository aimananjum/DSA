#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* prev;
	node* next;

	node(int val){
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void insertAtStart(node* &head,int val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	temp->prev=n;
	n->next=temp;
	head=n;
}

void insertAtTail(node* &head,int val){
	node* n = new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	n->prev=temp;
	temp->next =n;
	return;
}
void insertAtAnyPosition(node* &head,int val,int pos){
	node* n= new node(val); 

	if(head==NULL || pos==1){
		insertAtStart(head,val);
		return;
	}
	if(head==NULL && pos!=1){
		cout<<"invalid position";
		return;
	}
	node* temp=head;
	node* temp2;
	node* temp3=NULL;
	for(int i=1;i<=pos;i++){
		temp3=temp;
		temp=temp->next;
		temp2=temp->next;
	}
	temp3->next=n;
	n->prev=temp3;
	n->next=temp2;
	temp2->prev=n;
}
void deletionAtHead(node* &head){
	if(head==NULL){
		return;
	}
	node* todel=head;
	head=head->next;
	head->prev=NULL;
	delete todel;
	return;
}
void deletion(node* &head,int pos){
	if(pos==1){
		deletionAtHead(head);
		return;
	}
	node* temp=head;
	int count=1;
	while(head!=NULL && count!=pos){
		temp=temp->next;
		count++;
	}
	node* todel=temp;
	temp->prev->next=temp->next;
	if(temp->next!=NULL)
		temp->next->prev=temp->prev;

	delete temp;
	return;

}
node* mergeList(node* &head1,node* &head2){
	node* dumynode = new node(-1);
	node* t1=head1;
	node* t2=head2;
	node* t3=dumynode;
	while(t1!=NULL && t2!=NULL){
		if(t1->data<t2->data){
			t3->next=t1;
			t1=t1->next;
		}
		else{
			t3->next=t2;
			t2=t2->next;
		}
		t3=t3->next;
	}
	while(t1!=NULL){
		t3->next=t1;
		t1=t1->next;
		t3=t3->next;
	}
	while(t2!=NULL){
		t3->next=t2;
		t2=t2->next;
		t3=t3->next;
	}
	return dumynode->next;
}

node* mergeRec(node* &head1,node* &head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node* result;
	if(head1->data<head2->data){
		result=head1;
		result->next=mergeRec(head1->next,head2);
	}
	else{
		result=head2;
		result->next = mergeRec(head1,head2->next);
	}
	return result;
}

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head1=NULL;
	node* head2=NULL;
	insertAtTail(head1,1);
	insertAtTail(head1,152);
	insertAtTail(head1,300);
	insertAtTail(head1,400);
	insertAtTail(head2,5);
	insertAtTail(head2,16);
	insertAtTail(head2,27);
	insertAtTail(head2,80);
	display(head1);
	display(head2);cout<<endl;

	node* mergehead=mergeRec(head1,head2);
	display(mergehead);

	// insertAtStart(head,1);
	// insertAtStart(head,1);
	// insertAtStart(head,1);
	// insertAtStart(head,1);
	// display(head);

	// insertAtAnyPosition(head,12,4);display(head);
	// insertAtAnyPosition(head,12,1);display(head);
	// insertAtAnyPosition(head,12,3);display(head);
	// insertAtAnyPosition(head,12,6);
	// display(head);
	// deletion(head,4);
	// display(head);
	// deletion(head,1);
	// display(head);
	// deletion(head,3);
	// display(head);

	return 0;
}