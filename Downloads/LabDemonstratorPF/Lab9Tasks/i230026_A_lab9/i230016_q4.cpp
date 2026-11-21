#include <iostream>
#include <cctype> // For isupper and islower functions
using namespace std;

int main() {
    const int SIZE = 20;
    char sentence[SIZE];

    // Asking the user to enter a sentence and storing it in the array
    cout << "Enter a sentence (up to 19 characters): ";
    cin.getline(sentence, SIZE);

    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int vowelFrequency[5] = {0}; // Array to store the frequency of each vowel

    // Counting uppercase, lowercase, and vowel frequency
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (isupper(sentence[i])) {
            upperCaseCount++;
        } else if (islower(sentence[i])) {
            lowerCaseCount++;
        }
        // Checking for vowels and updating their frequency
        switch (tolower(sentence[i])) {
            case 'a':
                vowelFrequency[0]++;
                break;
            case 'e':
                vowelFrequency[1]++;
                break;
            case 'i':
                vowelFrequency[2]++;
                break;
            case 'o':
                vowelFrequency[3]++;
                break;
            case 'u':
                vowelFrequency[4]++;
                break;
        }
    }

    // Printing number of uppercase and lowercase letters
    cout << "Number of uppercase letters: " << upperCaseCount << endl;
    cout << "Number of lowercase letters: " << lowerCaseCount << endl;

    // Printing frequency of each vowel
    cout << "Frequency of each vowel:" << endl;
    cout << "A: " << vowelFrequency[0] << endl;
    cout << "E: " << vowelFrequency[1] << endl;
    cout << "I: " << vowelFrequency[2] << endl;
    cout << "O: " << vowelFrequency[3] << endl;
    cout << "U: " << vowelFrequency[4] << endl;

    // Capitalizing first letter of each word
    bool newWord = true; // Flag to track if the current character is the start of a new word
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (isalpha(sentence[i])) { // Check if the current character is a letter
            if (newWord) {
                sentence[i] = toupper(sentence[i]); // Capitalize the first letter of the word
                newWord = false;
            }
        } else {
            newWord = true; // If it's not a letter, the next character starts a new word
        }
    }

    // Displaying the modified sentence
    cout << "Sentence with first letter of each word capitalized: " << sentence << endl;

    return 0;
}

