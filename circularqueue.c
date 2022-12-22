#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct circular{
    int data;
    struct circular* next;
} MyCircularQueue;
MyCircularQueue * front;
MyCircularQueue * rear;
int size;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue * obj;
    front= NULL;
    rear= NULL;
    size= k;
    return obj;
}

int  myCircularQueuesize(MyCircularQueue * obj){
    if(front==NULL){
        return 0;
    }
    if(front==rear && front!= NULL){
        return 1;
    }
    MyCircularQueue * ob= front;
    int c=0;
    while(ob!=rear){
        ob = ob->next;
        c=c+1;
    }
    printf("%d",c);
    return c+1;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    int s= myCircularQueuesize(obj);
    if(s == size){
        return false;
    }
    else{
        MyCircularQueue * temp= (MyCircularQueue *)malloc(sizeof(MyCircularQueue));
        temp->data= value;
        if(front== NULL){
            front = temp;
            rear= temp;
            rear->next=front;
        }
        else{
            rear->next= temp;
            rear= rear->next;
            rear->next= front;
        }
        return true;
    }
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(front==NULL){
        return false;
    }
    else{
        front=front->next;
        rear->next= front;
        return true;
    }
}

int myCircularQueueFront(MyCircularQueue* obj) {
    return front->data;
}

int myCircularQueueRear(MyCircularQueue* obj) {
    return rear->data;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    if(front==NULL){
        return true;
    }
    else
        return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    int s=myCircularQueuesize(obj);
    if(s==size){
        return true;
    }
    else 
        return false;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    if(front== NULL && rear==NULL){
        free(obj);
    }
}
int main(){
    MyCircularQueue * obj;
    obj = myCircularQueueCreate(3);
    printf("%d\n", size);
    bool a, b , c, d;
    a=myCircularQueueEnQueue(obj, 1);
    
    a=myCircularQueueEnQueue(obj, 2);
   
    a=myCircularQueueEnQueue(obj, 3);
}