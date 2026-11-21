# include <iostream>
using namespace std;

int main() {
	cout << "Hiyam Rehan, 23I-0039, Q#4\n\n";

	// Temprature to check
	float temp;
	
	// Taking input for temprature
	cout << "Enter temprature as Centigrade: ";
	cin >> temp;
	
	// Bool checks depending on value of temprature. only one of each can be true at a time
	bool vh = temp >= 40;
	bool h = temp >= 30 && temp < 40;
	bool n = temp >= 20 && temp < 30;
	bool c = temp >= 10 && temp < 20;
	bool vc = temp >= 0 && temp < 10;
	bool f = temp < 0;
	
	// Declaring temprature level
	cout << "\nThe temprature is ";
	
	switch (vh) {
	case 1: // Temp is very hot
		cout << "very hot." << endl;
		break;
		
	case 0: // False, so check if temp is hot
		switch (h) {
		case 1: // Temp is hot
			cout << "hot." << endl;
			break;
			
		case 0: // False, so check if temp is normal
			switch (n) {
			case 1: // Temp is normal
				cout << "normal." << endl;
				break;
				
			case 0: // False, so check if temp is cold
				switch (c) {
				case 1: // Temp is cold
					cout << "cold." << endl;
					break;
					
				case 0: // False, so check if temp is very cold
					switch (vc) {
					case 1: // Temp is very cold
						cout << "very cold." << endl;
						break;
					
					case 0: // False, so check if temp is freezing
						switch (f) {
						case 1: // Temp is freezing
							cout << "freezing." << endl;
							break;
					
						case 0: // False, so temp is invalid
							cout << "invalid." << endl;
							break;
						}
						break;
					break;
				break;
			break;
		break;
					}
				}
			}
		}
	}
	return 0;
}
