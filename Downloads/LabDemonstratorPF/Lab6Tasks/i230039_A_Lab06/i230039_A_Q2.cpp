# include <iostream>
using namespace std;

int main() {
	cout << "Hiyam Rehan, 23I-0039, Q#2\n\n";
	
	// Initializing check for letter/digit and character itself
	int isNum, isLet;
	char check;
	
	// Taking user input
	cout << "Enter your character: ";
	cin >> check;
	
	// Bool to determine if char is either digit or letter
	isNum = (check >= 48 && check <= 57);
	isLet = (check >= 65 && check <= 90) || (check >= 97 && check <= 122);
	
	// Switch for output
	switch (isNum) {
	case 1: // isNum is true means char is a number
		cout << "\nCharacter is a digit." << endl;
		break;
		
	case 0: // If isNum is false
		switch (isLet) {
		case 1: // isLet is true means char is a letter
			cout << "\nCharacter is a letter." << endl;
			break;
		case 0: // Neither isNUm or isLet is true so it's an invalid output
			cout << "\nInvalid character." << endl;
		}
		
	default:
		break;
	}
	
	return 0;
}
