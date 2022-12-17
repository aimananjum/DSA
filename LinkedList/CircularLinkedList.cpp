#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

void insertNode(Node* &tail,int element,int d){
    if(tail == NULL){
        Node* node1 = new Node(d);
        node1->next=node1;
        tail=node1;
    }
    else{
        Node* curr=tail;
        Node* node1 = new Node(d);
        while(curr->data!=element){
            curr=curr->next;
        }
        node1->next=curr->next;
        curr->next=node1;
    }
}
void print(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(temp!=tail);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    else{//non empty
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        // 1 node 
        if(curr==prev){
            tail=NULL;
        }
        //>=2 node
        else if(curr== tail){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    insertNode(tail,9,12);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,6,7);
    print(tail);

    insertNode(tail,12,20);
    print(tail);

    deleteNode(tail,20);
    print(tail);
    return 0;
}