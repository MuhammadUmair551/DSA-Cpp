#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<string> tree = {"A","B","C","D","E","",""};
	
	cout << "Root:" << tree[0] <<endl; 
	cout << "Left of B:" << tree[2*1 + 1] << endl;
	cout << "Right of B:" << tree[2*1 + 2] << endl;
	cout << "Parent of D:" << tree[(3 - 1) / 2] << endl;
	cout << "Parent of E:" << tree[(4-1) / 2] << endl;
	
	return 0;
}