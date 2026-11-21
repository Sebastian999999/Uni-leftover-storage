#include <iostream>
using namespace std;

int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    switch(input) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "The entered character is a digit." << endl;
            break;

        case 'a': case 'A': case 'b': case 'B': case 'c':
        case 'C': case 'd': case 'D': case 'e': case 'E':
        case 'f': case 'F': case 'g': case 'G': case 'h':
        case 'H': case 'i': case 'I': case 'j': case 'J':
        case 'k': case 'K': case 'l': case 'L': case 'm':
        case 'M': case 'n': case 'N': case 'o': case 'O':
        case 'p': case 'P': case 'q': case 'Q': case 'r':
        case 'R': case 's': case 'S': case 't': case 'T':
        case 'u': case 'U': case 'v': case 'V': case 'w':
        case 'W': case 'x': case 'X': case 'y': case 'Y':
        case 'z': case 'Z':
            cout << "The entered character is an alphabet." << endl;
            break;

        default:
            cout << "Invalid Input." << endl;
    }

    return 0;
}
