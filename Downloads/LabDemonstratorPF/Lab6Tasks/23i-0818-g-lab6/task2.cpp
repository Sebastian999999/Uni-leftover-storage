#include <iostream>
using namespace std;

int main() {
    char input;
    
    cout << "Enter a character: ";
    cin >> input;
    
    switch(input) {
        case '0' ... '9':
            cout << "The character is a digit.";
            break;
        case 'A' ... 'Z':
        case 'a' ... 'z':
            cout << "The character is an alphabet.";
            break;
        default:
            cout << "Invalid Input.";
    }
    
    return 0;
}

