#include <iostream>
using namespace std;

bool LinearSearching(int arr[],int size, int key){
	for(int i = 0; i < size; i++){
		if(arr[i] == key){
			return true;
		}
	}
	return false;
}


int main(){
	int arr[5] = {7, 40, 66, 85, 42};
	int key;
	
	cout << "Enter a number to search if it is in array: ";
	cin >> key;
	
	bool found = LinearSearching(arr, 5, key);
	
	if(found){
		cout<< "Number Found!"<< endl;
	}else{
		cout<< "Number Not Found" << endl;
	}
	
	return 0;
}