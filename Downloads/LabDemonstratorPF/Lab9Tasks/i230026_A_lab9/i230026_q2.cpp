#include <iostream>
#include <string>
using namespace std;

int main() {
    string myName = "Immad";
    int countA = 0;

    // Counting the occurrences of 'a' in the name
    for (char letter : myName) {
        if (letter == 'a' || letter == 'A') {
            countA++;
        }
    }

    cout << "My name is: " << myName << endl;
    cout << "The number of 'a's in my name is: " << countA << endl;

    return 0;
}

