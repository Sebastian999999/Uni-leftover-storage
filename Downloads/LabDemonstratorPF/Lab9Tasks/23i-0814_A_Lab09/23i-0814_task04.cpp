#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 20;
    char sentence[MAX_SIZE];
    

    cout << "Enter a sentence (max 19 characters): ";
    cin.getline(sentence, MAX_SIZE);
    

    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int vowelFrequency[5] = {0}; 
    
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            upperCaseCount++;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            lowerCaseCount++;
        }
        
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
    
   
    cout << "Number of upper case letters: " << upperCaseCount << endl;
    cout << "Number of lower case letters: " << lowerCaseCount << endl;
    
 
    cout << "Frequency of each vowel:" <<endl;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; ++i) {
        cout << vowels[i] << ": " << vowelFrequency[i] <<endl;
    }
    bool newWord = true;
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (newWord && sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = toupper(sentence[i]);
            newWord = false;
        } else if (sentence[i] == ' ') {
            newWord = true;
        }
    }
    
  cout << "Modified sentence: " << sentence <<endl;
    
    return 0;
}
