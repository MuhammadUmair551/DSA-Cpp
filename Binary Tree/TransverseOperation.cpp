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

void preorder(Node* root){
	if(root == NULL){
		return;
	}
	cout << root->data << endl;
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left); 
	cout << root->data << endl; 
	inorder(root->right);
}

void postorder(Node* root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << endl;
}

int main(){
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
	
	cout << "PreOrder:" << endl;
	preorder(root); 
	cout << endl;
	
	cout << "InOrder:" << endl;
	inorder(root);
	cout << endl;
	
	cout << "PostOrder:" << endl;
	postorder(root);
	cout << endl;
	
	
	delete root->left->right;
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;
	return 0;
}