#include<iostream>
using namespace std;

class TreeNode{
public:
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int d) : data(d), left(NULL), right(NULL){
	};
};

TreeNode* insertBST(TreeNode* root, int val){
	if(root == NULL){
		return new TreeNode(val);
	}
	
	if(val < root->data){
		root->left = insertBST(root->left, val);
	}else if(val > root->data){
		root->right = insertBST(root->right, val);
	}
	return root;
}

bool searchBST(TreeNode* root, int target){
	if(root == NULL){
		return false;
	}
	if(root->data == target){
		return true;
	}
	if(target < root->data){
		return searchBST(root->left, target);
	}else{
		return searchBST(root->right, target);
	}
}

TreeNode* deleteBST(TreeNode* root, int key) {

    if (root == nullptr) return root;

    if (key < root->data) {
        root->left = deleteBST(root->left, key);
    } 
    else if (key > root->data) {
        root->right = deleteBST(root->right, key);
    } 
    else {

        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }

        else if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        else {
            TreeNode* successor = root->right;
            while (successor->left != nullptr) {
                successor = successor->left;
            }
    
            root->data = successor->data;
            root->right = deleteBST(root->right, successor->data);
        }
    }
    return root;
}

void inorder(TreeNode* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}

int main(){
	TreeNode* root = NULL;
	
	root = insertBST(root, 50);
	root = insertBST(root, 30);
	root = insertBST(root, 70);
	root = insertBST(root, 20);
	root = insertBST(root, 40);
	root = insertBST(root, 60);
	root = insertBST(root, 80);
	
	cout << "Initail Tree Inorder" << endl;
	inorder(root);
	
	cout << "Search 40:" << endl;
	if(searchBST(root,40)){
		cout << "Found!" <<endl;
	}else{
		cout<< "Not Found!"; 
	}
	
	root = deleteBST(root,20);
	root = deleteBST(root,70);
	root = deleteBST(root,50);
	
	cout << "After Deletion:"<<endl;
	inorder(root);
	
	return 0;
}
