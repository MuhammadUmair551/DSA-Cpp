#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}  

void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] <<  " ";
	}
	cout << endl;
}

int main (){
	int arr[] = {5, 8, 9, 4, 1 ,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Before Bubble Sort : " << endl;
	
	printArray(arr, size);
	bubbleSort(arr, size);
	
	cout << "After Bubble Sort : " << endl; 
	printArray(arr,size);
	
	return 0;
}