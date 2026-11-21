# include <iostream>
using namespace std;

int divide (int, int = 2);

int main() {
	cout << "Hiyam Rehan, 23I-0039, A, Question #3\n" << endl;

	int x, y;

	cout << "Enter the value of x: ";
	cin >> x;

	cout << "Enter the value of y: ";
	cin >> y;

	cout << "\nCalling functions with only x..." << endl;
	float res = divide(x);
	cout << "Result: " << res << endl;

	cout << "\nCalling functions with both x and y..." << endl;
	res = divide(x, y);
	cout << "Result: " << res << endl;

	return 0;
}

int divide (int a, int b ) {
	float div = (a*1.0)/b;
	return div;
}