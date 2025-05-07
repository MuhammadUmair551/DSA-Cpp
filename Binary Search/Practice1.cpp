#include <iostream>
using namespace std;


bool binarySearching(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    while(start <= end){
    	int mid = (start + end) / 2;
    	if(arr[mid] == key){
    		return true;
    		
		}else if(arr[mid] < key){
			start = mid + 1;
			
		}else{
			end = mid - 1;
		}
	}
	
	return false;
}

int main (){
    int arr[7] = {1, 3, 5, 7, 9, 11, 13};
    int key;
	
	cout << "Enter a Number to Search : " << endl;
	cin >> key;
	
	if(binarySearching(arr, 7, key)){
		cout <<"Element Found!" << endl;
	} else{
	    cout << "Element not Found!" << endl;	
	}
	
	return 0;
}