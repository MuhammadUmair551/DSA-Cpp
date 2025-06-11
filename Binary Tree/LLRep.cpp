#include<iostream>	
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int d) : data(d), left(NULL), right(NULL){
	};
};

int main(){
	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	
	cout << "Root:" << root->data <<endl;
	cout << "Left of 10:" << root->left->data <<endl;
	cout << "Right of 10:" << root->right->data <<endl;
	cout << "Left of 20:" << root->left->left->data <<endl;
	
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;
	return 0;
}