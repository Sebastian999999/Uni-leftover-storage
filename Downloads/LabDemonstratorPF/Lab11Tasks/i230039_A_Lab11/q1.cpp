# include <iostream>
using namespace std;

int tripleCallByValue(int);
void tripleCallByReference(int &);

int main() {
	cout << "Hiyam Rehan, 23I-0039, A, Question #1\n" << endl;

	int x;
	
	cout << "Enter the value of x: ";
	cin >> x;

	cout << "FUNCTION 1: Call by Value" << endl;
	cout << "Before calling fuction: " << x << endl;
	int ans = tripleCallByValue(x);
	cout << "After calling fuction: " << ans << endl;

	cout << "\nFUNCTION 2: Call by Reference" << endl;
	cout << "Before calling fuction: " << x << endl;
	tripleCallByReference(x);
	cout << "After calling fuction: " << x << endl;

	return 0;
}

int tripleCallByValue(int a) {
	int res = a*a*a;
	return res;
}

void tripleCallByReference(int &a) {
	a = a*a*a;
}
