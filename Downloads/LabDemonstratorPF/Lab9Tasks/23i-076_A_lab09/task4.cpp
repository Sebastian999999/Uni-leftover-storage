#include <iostream>
using namespace std;

int main() {
    char sen[20];
    int U_case = 0, L_case = 0;
    int Freq[5] = {0}; // For 'a', 'e', 'i', 'o', 'u'

    cout << "Enter a sentence (up to 19 characters): ";
    cin.get(sen, 20); // Read input into sen, allowing up to 19 characters

    // Count uppercase and lowercase letters, and frequency of vowels
    for (int i = 0; i < 20; i++) {
        if (sen[i] >= 'A' && sen[i] <= 'Z') {
            U_case++;
        } else if (sen[i] >= 'a' && sen[i] <= 'z') {
            L_case++;
        }

        switch (sen[i]) {
            case 'a':
            case 'A':
                Freq[0]++;
                break;
            case 'e':
            case 'E':
                Freq[1]++;
                break;
            case 'i':
            case 'I':
                Freq[2]++;
                break;
            case 'o':
            case 'O':
                Freq[3]++;
                break;
            case 'u':
            case 'U':
                Freq[4]++;
                break;
        }
    }

    cout << "Number of uppercase letters: " << U_case << endl;
    cout << "Number of lowercase letters: " << L_case << endl;

    cout << "Frequency of vowels:" << endl;
    cout << "a: " << Freq[0] << endl;
    cout << "e: " << Freq[1] << endl;
    cout << "i: " << Freq[2] << endl;
    cout << "o: " << Freq[3] << endl;
    cout << "u: " << Freq[4] << endl;

    
    bool newWord = true; 
    for (int i = 0; i < 20; i++) {
        if (sen[i] == ' ' || sen[i] == '\0') {
            newWord = true; 
        } else {
            if (newWord) {
                if (sen[i] >= 'a' && sen[i] <= 'z') {
                    sen[i] -= 32; 
                }
                newWord = false; 
            }
        }
    }

    cout << "Capitalized sentence: " << sen << endl;

    return 0;
}

