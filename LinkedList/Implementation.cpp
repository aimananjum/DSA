//singly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        delete next;
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
//when only head ptr is given O(n)time
void InsertAtEnd(Node* &head,int d){
    Node* temp=new Node(d);
    Node *temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
}
//traverse
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
//when tail ptr is given insertion at end O(1)time
void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}
//position is given O(n) worst case
void InsertAtMiddle(Node* &head,Node* &tail,int d,int pos){
    //for first position
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int count=1;
    Node* newNode = new Node(d);
    
    //traverse till n-1 to insert at n position
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    //if its last node then update/insert at tail
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    //insert at middle position
    newNode->next=temp->next;
    temp->next=newNode;
}
//
void deleteNode(int pos,Node* &head,Node* &tail){
    //update head for first node deletion
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        //if it is last node then update tail
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main(){
    Node* node1 = new Node(10);
    // //cout<<node1->data;
    Node* head = node1;
    // InsertAtHead(head,12);
    // InsertAtHead(head,15);
    // InsertAtHead(head,5);
    // InsertAtHead(head,1);
    // //print(head);
    // InsertAtEnd(head,8);
    //InsertAtEnd(head,8);
    // InsertAtEnd(head,8);
    // print(head);
    Node* tail = node1;
    // print(head);

     InsertAtTail(tail,12);
    // print(head);

    InsertAtTail(tail,15);
    // print(head);
    // InsertAtTail(tail,50);
    // InsertAtTail(tail,10);
    // InsertAtTail(tail,60);
    //print(head);
    InsertAtMiddle(head,tail,100,4);
    InsertAtTail(tail,50);
    print(head);
    deleteNode(5,head,tail);
    // InsertAtTail(tail,60);
    // InsertAtHead(head,1);
    //cout<<"Tail data "<<tail->data<<" ";
    InsertAtTail(tail,60);
    print(head);
    return 0;
}