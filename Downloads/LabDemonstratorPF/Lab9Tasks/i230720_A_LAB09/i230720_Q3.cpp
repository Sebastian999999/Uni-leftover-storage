//i230720_Ahmed Mujtaba
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int size = 5, arr1[size], arr2[size], last, first;
	for(int i = 0; i < size; i++) {
		cout << "Enter element " << i+1 << " in the array: ";
		cin >> arr1[i];
		arr1[i] = pow(arr1[i],2);
	}
	for(int i = 0; i < size; i++) {
		
		first = arr1[i];
		last = arr1[(size-1)-i];
		arr2[i] = last;
		arr2[(size-1)-i] = first;
		
	}
	cout << "Updated Array in reverse order: " << endl;
	for(int i = 0; i < size; i++) {
		cout << arr2[i] << ", ";
	}
	
	
	return 0;
	
}
