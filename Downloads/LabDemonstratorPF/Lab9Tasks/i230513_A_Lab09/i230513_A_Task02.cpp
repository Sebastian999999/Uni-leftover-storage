#include <iostream>
using namespace std;

int main() {
    char name[] = "Faseeh";
    int countA = 0;

    for (int i = 0; name[i] != '\0'; ++i) {
        if (name[i] == 'a' || name[i] == 'A') {
            countA++;
        }
    }

    cout << "The number of 'a's in the name \"" << name << "\" is: " << countA << endl;

    return 0;
}


