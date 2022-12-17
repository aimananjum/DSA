//Doubly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        delete next;
        cout<<"Memory free for node with data "<<value<<endl;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printRtoL(Node* &tail,Node* &head){
    Node* temp=tail;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data;
    cout<<endl;
}
void insertAtTail(Node* &tail,int d){
    Node* newNode = new Node(d);
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void insertAtHead(Node* &head,int d){
    Node* newNode = new Node(d);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void insertAtMiddle(Node* &head,Node* &tail,int d,int pos){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    int count=1;
    Node* temp=head;
    Node* newNode = new Node(d);
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}
void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp = head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else{
        int count=1;
        Node* curr=head;
        while(count<pos){
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL){
            tail=curr->prev;
            curr->prev->next=NULL;
            curr->prev=NULL;
            delete curr;
            return;
        }
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head=node1;
    Node* tail=node1;
    Node* node2 = new Node(20);
    node1->next=node2;
    node2->prev=node1;
    tail=node2;
    //print(head);
    //printRtoL(tail,head);

    insertAtTail(tail,15);
    //print(head);
    //printRtoL(tail,head);
    insertAtHead(head,80);
    //print(head);
    insertAtMiddle(head,tail,100,2);
    //print(head);
    insertAtMiddle(head,tail,99,6);
    print(head);
    //printRtoL(tail,head);
    deleteNode(head,tail,6);
    print(head);
    printRtoL(tail,head);
    return 0;
}