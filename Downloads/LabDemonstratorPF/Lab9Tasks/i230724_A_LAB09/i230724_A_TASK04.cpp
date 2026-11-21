// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
using namespace std;

int main() {
    char sentence_array[20];

    cout << "Enter a sentence (20 chars)" << endl;
    cin.getline(sentence_array, 20);

    int upper = 0, lower = 0;
    for (int i = 0; i < 20; i++) {
        if (sentence_array[i] >= 'A' && sentence_array[i] <= 'Z')
            upper++;
        else if (sentence_array[i] >= 'a' && sentence_array[i] <= 'z')
            lower++;
    }
    cout << "Number of uppercase letters: " << upper << endl;
    cout << "Number of lowercase letters: " << lower << endl;

    // Printing frequency of each vowel in the input
    int vowels[5] = {0}; // For vowels A, E, I, O, U
    for (int i = 0; i < 20; i++) {
        switch (ch) {
            case 'a':
                vowel[0]++;
                break;
            case 'A':
                vowel[0]++;
                break;
            case 'e':
                vowel[1]++;
                break;
            case 'E':
                vowel[1]++;
                break;
            case 'i':
                vowel[2]++;
                break;
            case 'I':
                vowel[2]++;
                break;
            case 'o':
                vowel[3]++;
                break;
            case 'O':
                vowel[3]++;
                break;
            case 'u':
                vowel[4]++;
                break;
            case 'U':
                vowel[4]++;
                break;
            default:
                break;
        }
    }
    cout << "Frequency of vowels in the input:" << endl;
    cout << "A: " << vowel[0] << endl;
    cout << "E: " << vowel[1] << endl;
    cout << "I: " << vowel[2] << endl;
    cout << "O: " << vowel[3] << endl;
    cout << "U: " << vowel[4] << endl;

    return 0;
}
