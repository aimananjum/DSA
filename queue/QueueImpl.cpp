#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int qfront;
    int rear;
    int size;
    
    Queue() {
        size=100001;
        arr = new int[size];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear) return true;
        else return false;
    }

    void enqueue(int data) {
        if(rear==size-1)
            cout<<"Queue is full";
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(rear==qfront)
            return -1;
        int ans = arr[qfront];
        qfront++;
        if(qfront==rear){
            qfront=rear=0;
        }
        return ans;
    }

    int front() {
        if(qfront==rear)
            return -1;
        else
            return arr[qfront];
    }
};
