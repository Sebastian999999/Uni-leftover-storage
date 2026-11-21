//i230720_Ahmed Mujtaba
#include<iostream>
using namespace std;
int main() {
	int arr[5];
	for(int i = 0; i < 5; i++) {
		again: {
			cout << "Enter array element: ";
			cin >> arr[i];
		}
		if(arr[i] < 0 || arr[i] >9) {
			cout <<"Enter again, invalid input!" << endl;
			goto again;
		}
		
		}
		int num;
			numAgain: {
			cout << "Enter a number you wish to search in the array: ";
			cin >> num;
			}
			if(num < 0 || num >9) {
				cout << "Number can only be 0 - 9! enter again: " << endl;
				goto numAgain;
			}	
		
		for(int i = 0; i < 5; i++) {
			if(arr[i] == num) {
				cout << "Number is present in the array";
				return 0;
			}
			
		}
		cout << "Number not present in the array";
	}

