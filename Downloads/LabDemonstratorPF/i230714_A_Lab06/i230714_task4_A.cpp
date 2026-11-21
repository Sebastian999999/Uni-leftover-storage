//Hafiz Ahmad
//23i-0714
#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "enter temperature in centigrades : ";
	cin >> temp;
	switch(temp) {
		case -273 ... -1 :
		cout << "Freezing " << endl;
		break;
		case 0 ... 9 :
		cout << "Very Cold " << endl;
		break;
		case 10 ... 19 :
		cout << "Cold " << endl;
		break;
		case 20 ... 29 :
		cout << "Normal " << endl;
		break;
		case 30 ... 39 :
		cout << "Hot " << endl;
		break;
		case 40 ... 1000 :
		cout << "Very Hot " << endl;
		break;
		default :
		cout << "you entered invalid temperature " << endl;
		break;
	}
	
	return 0;
}
