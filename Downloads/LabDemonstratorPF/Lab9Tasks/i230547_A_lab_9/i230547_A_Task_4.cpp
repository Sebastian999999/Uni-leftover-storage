#include <iostream>

using namespace std;

int main() {
    char sentence[21];
    cout << "Enter a sentence (max 20 characters): ";
    cin.getline(sentence, 19);

    int uppercaseCount = 0;
    
    int lowercaseCount = 0;
    
    int vowelsCount[5] = {0};
    

   
    for (int i = 0; sentence[i] != '\0'; ++i) {
    
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
        
            uppercaseCount++;
            
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
        
            lowercaseCount++;
        }
        
        char c = tolower(sentence[i]);
        
        if (c == 'a') {
            vowelsCount[0]++;
            
        } else if (c == 'e') {
        
        
            vowelsCount[1]++;
            
        } else if (c == 'i') {
        
            vowelsCount[2]++;
            
            
        } else if (c == 'o') {
        
            vowelsCount[3]++;
            
        } else if (c == 'u') {
        
            vowelsCount[4]++;
        }
    }

    
    cout << "Number of uppercase letters: " << uppercaseCount << endl;
    
    cout << "Number of lowercase letters: " << lowercaseCount << endl;

    cout << "Frequency of vowels:" << endl;
    cout << "A: " << vowelsCount[0] << endl;
    
    cout << "E: " << vowelsCount[1] << endl;
    
    cout << "I: " << vowelsCount[2] << endl;
    
    cout << "O: " << vowelsCount[3] << endl;
    
    cout << "U: " << vowelsCount[4] << endl;

    
    bool newWord = true;
    
    for (int i = 0; sentence[i] != '\0'; ++i) {
    
        if (newWord && sentence[i] >= 'a' && sentence[i] <= 'z') {
        
            sentence[i] = toupper(sentence[i]);
            
            newWord = false;
            
        } else if (sentence[i] == ' ') {
        
        
            newWord = true;
        }
    }

  
    cout << "Sentence with first letter of each word capitalized: " << sentence << endl;

    return 0;
}

