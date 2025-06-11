#include <iostream>
using namespace std;

class Node {
public:
    int data;
    int priority;
    Node* next;

    Node(int d, int p) : data(d), priority(p), next(nullptr) {}
};

class PriorityQueue {
private:
    Node* head;

public:
    PriorityQueue() : head(nullptr) {}
    void enqueue(int data, int priority) {
        Node* newNode = new Node(data, priority);

        if (!head || priority > head->priority) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next && temp->next->priority >= priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void dequeue() {
        if (!head) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int peek() {
        if (!head) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " (Priority: " << temp->priority << ") -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(10, 2);  
    pq.enqueue(20, 1);  
    pq.enqueue(30, 3);  
    pq.enqueue(40, 2); 

    pq.print();

    pq.dequeue();
    cout << "Peek: " << pq.peek() << endl;

    pq.print(); 

    return 0;
}