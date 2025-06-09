#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize, cap;
    int front, rear;
    
    public:
        CircularQueue(int size){
            cap = size;
            arr = new int[cap];
            currSize = 0;
            front = 0;
            rear = -1;
        }
        
        void push(int data){
            if(currSize == cap){
                cout << "Queue is Full" << endl;
                return;
            }
            rear = (rear + 1) % cap; 
            arr[rear] = data;
            currSize++;
        }
        
        void pop(){
            if(empty()){
                cout << "Queue is Empty" << endl;
                return;
            }
            front = (front + 1) % cap;
            currSize--;
        }
        
        int getFront(){
            if(empty()){
                cout << "Queue is Empty" << endl;
                return -1;
            }
            return arr[front];     
        }
    
        bool empty(){
            return currSize == 0;
        }
        
        void printArr(){
            for(int i = 0; i < cap; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};  

int main(){
    CircularQueue cq(3); 
    
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    
    cq.push(4);
    
//    cq.printArr();
    
//    For CIRCULAR

    while(!cq.empty()){
    	cout << cq.getFront() << endl;
    	cq.pop();
	}
    return 0;
}