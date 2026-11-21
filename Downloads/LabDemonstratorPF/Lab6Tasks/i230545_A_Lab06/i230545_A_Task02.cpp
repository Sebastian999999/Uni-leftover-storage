#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    bool isCharacter = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
    bool isDigit = ch >= '0' && ch <= '9';

    switch (10 * isCharacter + isDigit) {
        case 10:
            cout << "Character";
            break;
        case 1:
            cout << "Digit";
            break;
        default:
            cout << "Invalid character";
    }

    return 0;
}

