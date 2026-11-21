#include <iostream>

using namespace std;

int main() {
    const int maxSize = 20;
    char sentence[maxSize];

    cout << "Enter a sentence (up to " << maxSize - 1 << " characters): ";
    cin.getline(sentence, maxSize);

    int upperCount = 0, lowerCount = 0;
    int vowels[5] = {0}; 

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            upperCount++;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            lowerCount++;
        }

 
        switch (tolower(sentence[i])) {
            case 'a':
                vowels[0]++;
                break;
            case 'e':
                vowels[1]++;
                break;
            case 'i':
                vowels[2]++;
                break;
            case 'o':
                vowels[3]++;
                break;
            case 'u':
                vowels[4]++;
                break;
        }
    }

    cout << "Number of uppercase letters: " << upperCount << endl;
    cout << "Number of lowercase letters: " << lowerCount << endl;
    cout << "Frequency of vowels (a, e, i, o, u): ";
    for (int i = 0; i < 5; ++i) {
        cout << vowels[i] << " ";
    }
    cout << endl;

    bool capitalizeNext = true;
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (isspace(sentence[i])) {
            capitalizeNext = true;
        } else if (capitalizeNext && (sentence[i] >= 'a' && sentence[i] <= 'z')) {
            sentence[i] -= ('a' - 'A'); 
            capitalizeNext = false;
        }
    }

    cout << "Modified sentence with first letter of each word capitalized: " << sentence << endl;

    return 0;
}

