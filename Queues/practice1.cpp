#include<iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int val){
	if(rear == SIZE - 1){
		cout << "Queue is Full!"<<endl;
	}
	else{
		if(front == -1) front = 0;
		queue[++rear] = val;
	    cout<< val << "enqueued" <<endl;
	}
}

void dequeue(){
	if(front == -1 || front > rear){
		cout << "Queue is Empty!" << endl;
	}else{
		cout << queue[front++] << "dequeued." <<endl;
	}
}

void isEmpty(){
	if(front == -1 || front > rear){
		cout << "Queue is Empty!" << endl;
	}else{
		cout << "Queue is not empty" <<endl;
	}
}

void isFull(){
	if(rear == SIZE -1){
		cout<< "Queue is Full!" << endl;
	}else{
		cout<< "Queue is not FULL"<<endl;
	}
}

void isInList(int val){
	for(int i = front ; i <= rear; i++){
		if(queue[i] == val){
			cout << val << "is in the queue" <<endl;
			return;
		}
	}
	cout<< val << "is not in the queue" << endl;
}


