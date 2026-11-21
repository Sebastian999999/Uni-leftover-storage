#include <iostream>
using namespace std;

int main() {
    char ch[20];

    cout << "Enter a sentence: ";
    cin.get(ch, 20);
    

    // Finding UpperCase letters count and Lower Case count
    int UpperCase_Count = 0;
    int LowerCase_Count = 0;

    for (int i = 0; i < 20; i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            UpperCase_Count++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z') {
            LowerCase_Count++;
        }
    }

    cout << endl << "Upper Case letters in a sentence are: " << UpperCase_Count << endl;
    cout << endl << "Lower Case letters in a sentence are: " << LowerCase_Count << endl;

    int Vowels[5] = {0};

    for (int i = 0; i < 20; i++) {
        // Count vowels
        char lowercaseChar = ch[i];
        if (lowercaseChar >= 'A' && lowercaseChar <= 'Z') {
            lowercaseChar += 'a' - 'A';
        }
        switch (lowercaseChar) {
            case 'a':
                Vowels[0]++;
                break;
            case 'e':
                Vowels[1]++;
                break;
            case 'i':
                Vowels[2]++;
                break;
            case 'o':
                Vowels[3]++;
                break;
            case 'u':
                Vowels[4]++;
                break;
        }
    }

    // Print the frequency of each vowel
    cout << endl << "Frequency of each vowel:" << endl << endl;

    cout << "  a/A: " << Vowels[0] << endl;
    cout << "  e/E: " << Vowels[1] << endl;
    cout << "  i/I: " << Vowels[2] << endl;
    cout << "  o/O: " << Vowels[3] << endl;
    cout << "  u/U: " << Vowels[4] << endl;

    // Capitalize first letter of each word
    bool newWord = true;
    for (int i = 0; i < 20 && ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            if (newWord) {
                ch[i] -= 'a' - 'A';
                newWord = false;
            }
        } else {
            newWord = true;
        }
    }

    cout << endl << "Capitalized sentence: " << ch << endl;

    return 0;
}
