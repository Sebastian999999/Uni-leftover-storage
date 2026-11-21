//Hafiz Ahmad
//23i-0714
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char ch;
	cout << "welcome to my calculator " << endl;
	cout << "eneter 1st numbers : ";
	cin >> num1;
	cout << "eneter 2nd numbers : ";
	cin >> num2;
	cout << "eneter the operation you want to perform on two numbers : ";
	cin >> ch;
	switch(ch) {
		case '+' :
		cout << "result = " << num1 + num2 << endl;
		break;
		case '-' :
		cout << "result = " << num1 - num2 << endl;
		break;
		case '*' :
		cout << "result = " << num1 * num2 << endl;
		break;
		case '%' :
			if (num2 == 0){
				cout << "you entered an invalid number " << endl;
				break;
			}
		cout << "result = " << num1 % num2 << endl; 
		break;
		case '/' :
			if (num2 == 0){
				cout << "you entered an invalid number " << endl;
				break;
			} 
		cout << "result = " << num1 / num2 << endl;
		break;
		default :
		cout << "you entered an something invalid " << endl;
		break;
	}
	return 0;
}
