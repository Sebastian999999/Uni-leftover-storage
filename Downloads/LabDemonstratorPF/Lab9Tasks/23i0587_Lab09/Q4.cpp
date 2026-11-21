#include <iostream>

using namespace std;

int main() {
    char sentence[20];
    int upper = 0, lower = 0;
    int vowels[5] = {0}; 
    cout << "Enter a sentence: ";
    cin.getline(sentence, 20);

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            upper++;
            if (i == 0 || sentence[i-1] == ' ') {
                sentence[i] = sentence[i] + ('a' - 'A'); 
            }
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            lower++;
            if (i == 0 || sentence[i-1] == ' ') {
                sentence[i] = sentence[i] - ('a' - 'A'); 
                cout<<"Sentence after:"<<sentence[i]<<endl;
            }
        }

        switch (sentence[i]) {
            case 'A': case 'a': vowels[0]++; break;
            case 'E': case 'e': vowels[1]++; break;
            case 'I': case 'i': vowels[2]++; break;
            case 'O': case 'o': vowels[3]++; break;
            case 'U': case 'u': vowels[4]++; break;
        }
    }

    cout << "Upper case letters: " << upper << endl;
    cout << "Lower case letters: " << lower << endl;
    cout << "Frequency of vowels: A: " << vowels[0] << ", E: " << vowels[1] << ", I: " << vowels[2] << ", O: " << vowels[3] << ", U: " << vowels[4] << endl;
    cout << "Modified sentence: " << sentence << endl;

    return 0;
}
