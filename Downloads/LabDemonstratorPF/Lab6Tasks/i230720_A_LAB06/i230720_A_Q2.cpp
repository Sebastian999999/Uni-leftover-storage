//Ahmed Mujtaba i230720
#include<iostream>
using namespace std;
int main() {

	char choice;
	cout << "Enter your character: ";
	cin >> choice;

	switch((choice >= 65 && choice <= 90) || (choice >= 97 && choice < 122)) {
		case 1:
			cout << "alphabet!" << endl;
			break;
		case 0:
			switch(choice >= 48 && choice <= 57) {
				case 1:
					cout << "digit!" << endl;
					break;
				case 0:
					cout << "Invalid input!";
					break;
			}
	}
}
