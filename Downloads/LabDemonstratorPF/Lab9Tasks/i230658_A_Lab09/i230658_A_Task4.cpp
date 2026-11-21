#include <iostream>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c) 
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

// Function to check if a character is a letter
bool isLetter(char c) 
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Function to convert a character to uppercase
char up(char c) 
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

// Function to convert a character to lowercase
char low(char c) 
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

int main() {
    const int size = 20;
    char sentence[size];
    int ucount = 0;
    int lowercaseCount = 0;
    int vf[5] = {0}; // 'A', 'E', 'I', 'O', 'U'

    // Asking user to enter a sentence and storing it in the array
    cout << "Enter a sentence (max 20 characters): ";
    cin.getline(sentence, size);

    // Capitalizing the first letter of the sentence
    if (isLetter(sentence[0])) {
        sentence[0] = up(sentence[0]);
    }

    bool newWord = false;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isLetter(sentence[i])) {
            if (!newWord) {
                newWord = true;
                continue;
            }
            if (sentence[i] == up(sentence[i])) {
                ucount++;
            } else {
                lowercaseCount++;
            }
            char c = low(sentence[i]);
            if (isVowel(c)) {
                switch (c) {
                    case 'a': vf[0]++; break;
                    case 'e': vf[1]++; break;
                    case 'i': vf[2]++; break;
                    case 'o': vf[3]++; break;
                    case 'u': vf[4]++; break;
                }
            }
        } else if (isspace(sentence[i]) || ispunct(sentence[i])) {
            newWord = false;
        }
    }

    // Displaying the results
    cout << "Number of uppercase letters: " << ucount << endl;
    cout << "Number of lowercase letters: " << lowercaseCount << endl;
    cout << "Frequency of each vowel in the input:" << endl;
    cout << "A: " << vf[0] << endl;
    cout << "E: " << vf[1] << endl;
    cout << "I: " << vf[2] << endl;
    cout << "O: " << vf[3] << endl;
    cout << "U: " << vf[4] << endl;

    cout << "Modified sentence with first letter of sentence capitalized: " << sentence << endl;

    return 0;
}

