#include <iostream>
using namespace std;


int dectoBinary(int deciNum){
	int ans = 0, pow = 1;
	
	while(deciNum > 0){
		int rem = deciNum % 2;
		deciNum /= 2;
		
		ans += (rem * pow);
		pow *= 10; 
	}
	return ans;
}

int binatoDecimal(int binaNum){
	int ans = 0, pow = 1;
	
	while (binaNum > 0){
		int rem = binaNum % 10;
		ans += rem * pow;
		
		binaNum /= 10;
		pow *= 2;
	}
	return ans; 
}

int main(){
	int deciNum;
	int binaNum;
	cout << "Enter Any decimal Number: " << endl;
	cin >> deciNum;
	cout << dectoBinary(deciNum) << endl;
	cout << "Enter any Binary Number: " << endl;
	cin >> binaNum;
	cout<< binatoDecimal(binaNum);
	
	return 0;
}