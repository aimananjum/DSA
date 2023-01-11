#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int size;
    int front;
    int rear;
    int *arr;
    CircularQueue(int n){
        size=n;
        arr = new int[size];
        rear=front=-1;
    }
    bool enqueue(int value){
        if((rear==size-1 && front==0) || (rear==(front-1)%(size -1 ) )){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1){
            return -1;
        }
        int ans = arr[front];
        
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};
