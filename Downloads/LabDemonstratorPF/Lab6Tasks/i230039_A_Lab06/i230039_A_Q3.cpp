# include <iostream>
using namespace std;

int main() {
	cout << "Hiyam Rehan, 23I-0039, Q#3\n\n";
	
	// Initialization for inputs
	char gender;
	int age;
	bool h = 0; // for health issues check
	
	// Taking input from user
	cout << "Enter your gender (M/F): ";
	cin >> gender;
	cout << "Enter your age: ";
	cin >> age;
	
	// Checking for male / female input
	(gender=='M') ? ((age < 25) ? cout << "\nYour age is: " << age <<"\nYou can enjoy the rides!\n" : cout << "\nYour age is: " << age << "\nSorry, these rides are not safe for you.\n" ) : ((gender=='F') ? cout<< "\nDo you have health issues? (0: No 1: Yes.) " : cout << "");
	
	// For female, enter health issues
	cin >> h;
	
	// Check if user has health issues or not (if female)
	(gender=='F') ? ((h==0) ? cout << "\nYour age is: " << age <<"\nYou can enjoy the rides!\n" : cout << "\nYour age is: " << age << "\nSorry, these rides are not safe for you.\n") : cout << "";
	
	return 0;
}
