#include<iostream>
using namespace std;
int main() {

    const int SIZE = 20;
    char sentence[SIZE];
    int uppercase_count = 0, lowercase_count = 0;
    int vowel_count[5] = {0}; 

    
    cout << "Enter a sentence (up to 19 characters): ";  // Confirming user to not go above the limit of 19 characters
    cin.getline(sentence, SIZE);
    

    
    for (int i = 0; sentence[i] != '\0'; i++) {
    
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')    // Checking if the letter is uppercase
            uppercase_count++;
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')  // Checking if the letter is lowercase
            lowercase_count++;

        char c = sentence[i];
        
        if (c == 'a')            // Checking for 'a'
        
            vowel_count[0]++;
            
        else if (c == 'e')      // Checking for 'e'
            vowel_count[1]++;   
        else if (c == 'i')     // Checking for 'i'
            vowel_count[2]++;
        else if (c == 'o')    // Checking for 'o'
            vowel_count[3]++;
        else if (c == 'u')   // Checking for 'u'
            vowel_count[4]++;
    }

   
    cout << "Number of uppercase letters are: " << uppercase_count << endl;
    cout << "Number of lowercase letters are: " << lowercase_count << endl;

    cout << "Frequency of vowels in the sentence is:" << endl;
    cout << "a: " << vowel_count[0] << endl;
    cout << "e: " << vowel_count[1] << endl;
    cout << "i: " << vowel_count[2] << endl;
    cout << "o: " << vowel_count[3] << endl;
    cout << "u: " << vowel_count[4] << endl;

    
    bool new_word = true;
    
    for (int i = 0; sentence[i] != '\0'; i++) {
    
        if (new_word && sentence[i] >= 'a' && sentence[i] <= 'z') {   // Modifying the original sentence to convert all first letters of each word to capital letter
            sentence[i] -= 32; 
            new_word = false;
        } else if (sentence[i] == ' ')
            new_word = true;
    }

    
    cout << "The modified sentence with capitalized first letters is: " << sentence << endl;
    return 0;
}

