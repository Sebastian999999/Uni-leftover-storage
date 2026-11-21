//i230720_Ahmed Mujtaba
#include<iostream>
using namespace std;
int main() {
	char sentence[21];
	int lowCount = 0, upCount = 0, vowels = 0;
	cout << "Enter a sentence: ";
	cin.get(sentence, 20);
	for(int i = 0; i < 21; i++) {
		if(sentence[i] >= 97 && sentence[i] <= 122) lowCount++;
		else if(sentence[i] >= 65 && sentence[i] <= 90) upCount++;
		else continue;
		switch(sentence[i]) {
			case 'a':
				vowels++;
				
			case 'e':
				vowels++;
				
			case 'i':
				vowels++;
				
			case 'o':
				vowels++;
				
			case 'u':
				vowels++;
				
			case 'A':
				vowels++;
				
			case 'E':
				vowels++;
				
			case 'I':
				vowels++;
				
			case 'O':
				vowels++;
				
			case 'U':
				vowels++;
												
		}
		
	}
	for(int i = 0; i < 21; i++) {
		if(i == 0) {
			if(sentence[i] >= 97 && sentence[i] <= 122) sentence[i] = sentence[i] - 32;
		}
		if(sentence[i] == ' ') {
			if(sentence[i+1] >= 97 && sentence[i+1] <= 122) sentence[i+1] = sentence[i+1]-32;
		}

	}
	cout << sentence << endl;
	cout << "Lowercase count: " << lowCount << endl;
	cout << "Uppercase count: " << upCount << endl;
	cout << "Vowel count: " << vowels << endl;
}
