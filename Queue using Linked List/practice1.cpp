//#include<iostream>
//using namespace std;
//
//
//class Node{
//	public:
//		int data;
//		Node* next;
//		
//		Node(int val){
//			data = val;
//			next = NULL;
//		}
//};
//
//class Queue{
//	Node* head;
//	Node* tail;
//	
//	public:
//		Queue(){
//		   head= tail = NULL;	
//		}
//		
//		void push(int data){
//			Node* newNode = new Node(data); 
//			
//			if(empty()){
//			     head = tail = newNode;	
//			}else{
//				tail->next = newNode;
//				tail = newNode;
//			}
//	}
//		void Pop(){
//			if(empty()){
//				cout<<"Linked List is empty"<<endl;
//				return;
//			}
//				Node* temp = head;
//				head = head->next;
//				delete temp;
//		}
//		
//		int front(){
//			if(empty()){
//				cout<<"Linked List is empty"<<endl;
//				return -1;
//			}
//			return head->data;
//		}
//		
//		bool empty(){
//			return head == NULL;
//		}
//};

//int main(){
//	Queue q;	
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	
//	while(!q.empty()){
//		cout<< q.front() << " ";
//		q.Pop();
//	}
//	cout<<endl;
//	
//	return 0;
//}

//Short way to create a Queue using STL

//#include<iostream>
//#include<queue>  //* 
//using namespace std;
//
//int main(){
//	queue<int> q;  // *
//		
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	
//	while(!q.empty()){
//		cout<< q.front() << " ";
//		q.pop();
//	}	
//	cout<<endl;
//	
//	return 0;
//}

// Deque
//its a double ended queue like adding from front and rear both and popping and seeing 

#include<iostream>
#include<deque>  //* 
using namespace std;

int main(){
	deque<int> dq;  // *
		
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	
	dq.push_front(4);
	
	dq.pop_back();
	cout<< dq.front() << " " << dq.back() << endl;
	
	return 0;
}