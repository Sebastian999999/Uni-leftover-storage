#include <iostream>
using namespace std;

int main() {
    char sentence[20];
    int upperCount = 0, lowerCount = 0;
    int vowelFreq[5] = {0}; // a, e, i, o, u
    
    cout << "Enter a sentence (max 19 characters): ";
    cin.getline(sentence, 20);
    
    
    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            ++upperCount;
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
            ++lowerCount;
        
        switch(sentence[i]) {
            case 'a': case 'A': ++vowelFreq[0]; break;
            case 'e': case 'E': ++vowelFreq[1]; break;
            case 'i': case 'I': ++vowelFreq[2]; break;
            case 'o': case 'O': ++vowelFreq[3]; break;
            case 'u': case 'U': ++vowelFreq[4]; break;
        }
        
        
        if ((i == 0 || sentence[i - 1] == ' ') && (sentence[i] >= 'a' && sentence[i] <= 'z')) {
            sentence[i] -= 32; 
        }
    }
    
    
    cout << "Number of uppercase letters: " << upperCount << endl;
    cout << "Number of lowercase letters: " << lowerCount << endl;
    cout << "Frequency of vowels:" << endl;
    cout << "A/a: " << vowelFreq[0] << endl;
    cout << "E/e: " << vowelFreq[1] << endl;
    cout << "I/i: " << vowelFreq[2] << endl;
    cout << "O/o: " << vowelFreq[3] << endl;
    cout << "U/u: " << vowelFreq[4] << endl;
    cout << "Capitalized sentence: " << sentence << endl;
    
    return 0;
}

	
