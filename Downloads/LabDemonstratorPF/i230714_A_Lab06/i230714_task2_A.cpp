//Hafiz Ahmad
//23i-0714
#include<iostream>
using namespace std;
int main()
{
	
	char ch;
	cout << "enter a digit or a charchter : ";
	cin >> ch;
	switch(ch) {
		case 'a' ... 'z' :
		cout << "it is a lower case alphabet. " << endl;
		break;
		case 'A' ... 'Z' :
		cout << "it is n upper case alphabet. " << endl;
		break;
		case '0' ... '9' :
		cout << "it is a digit. " << endl;
		break;
		default :
		cout << "you entered an invalid input " << endl;
		break;
	}
	
	return 0;
}
