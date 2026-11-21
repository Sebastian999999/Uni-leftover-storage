//i230720 Ahmed Mujtaba
#include<iostream>
using namespace std;
int main() {
	int temp;
	cout << "Enter temperature in Centigrade: ";
	cin >> temp;
	
	switch ((int)(temp >= 40)) {
		case 1:
			cout << "very hot!";
			break;
		case 0:
				switch (temp >= 30 && temp < 40) {
					case 1:
						cout << "Hot";
						break;
					case 0:
						switch (temp >= 20 && temp < 30) {
							case 1:
								cout << "Normal";
								break;
							case 0:
								switch (temp >= 10 && temp < 20) {
									case 1:
										cout << "Cold";
										break;
									case 0:
										switch (temp >= 0 && temp < 10) {
											case 1:
												cout << "Very Cold";
												break;
											case 0:
												switch (temp < 0) {
													case 1:
														cout << "Freezing";
														break;
													case 0:
														cout << "error";
														break;
												}
										}
									
								}
						}
						
				}
			break;
			
			default:
				switch (temp <= -273) {
					case 1:
					cout << "Invalid temperature!";
					break;
					case 0:
					return 0;
					break;
				}
				
	}
}
