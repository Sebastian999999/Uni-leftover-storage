#include <iostream>

using namespace std;

int main()
 {
char sentence[20];
int upperCount = 0;
int lowerCount = 0;
int Frequency[5] = {0}; 

cout << "Enter a sentence (up to 19 characters).............."<<endl;
cin.getline(sentence, 20); 

    // Countting uppercase lowercase and the frequency for each vowel down below
    for (int i = 0; sentence[i] != '\0'; i++) 
    
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') 
        {
        
            upperCount++;
            
            
        } 
        
        
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
         {
            lowerCount++;
        }


char lowercase = sentence[i]; 
 		if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u'|| lowercase == 'A' || lowercase == 'E' || lowercase == 'I' || lowercase == 'O' || lowercase == 'U' ) 
{

            							switch (lowercase)
{
                						case 'a':
                    						Frequency[0]++;
                    						break;
                    						
                						case 'e':
                 					        Frequency[1]++;
                  						 break;
                  						  
                  						  
                						case 'i':
                    						Frequency[2]++;
                    						break;
                    						
                    						
                						case 'o':
                    						Frequency[3]++;
                    						break;
                    						
                    						
                						case 'u':
                    						Frequency[4]++;
                    						break;
                    						
                    						
                    						case 'A':
                    						Frequency[0]++;
                    						break;
                    						
                    						
                    						case 'E':
                    						Frequency[1]++;
                    						break;
                    						
                    						
                    						case 'I':
                    						Frequency[2]++;
                    						break;
                    						
                    						
                    						case 'O':
                    						Frequency[3]++;
                    						break;
                    						
                    						
                    						case 'U':
                    						Frequency[4]++;
                    						break;
}





}
}

 
cout << "Number of uppercase letters: " << upperCount << endl;
cout << "Number of lowercase letters: " << lowerCount << endl;

    // here we show how many times each vowel occuredddd
cout << "Frequency of vowels:" << endl;
cout << "a: " <<Frequency[0] << endl;
cout << "e: " <<Frequency[1] << endl;
cout << "i: " <<Frequency[2] << endl;
cout << "o: " <<Frequency[3] << endl;
cout << "u: " <<Frequency[4] << endl;

    // Capitalize first letter of each word
bool newWord = true; // Tracks if the current character is the start of a new word
    		for (int i = 0; sentence[i] != '\0'; i++)
     {
        		if (newWord && sentence[i] >= 'a' && sentence[i] <= 'z') 
        {
        
            					sentence[i] = sentence[i] - ('a' - 'A');
           							 newWord = false;
            
            
        } 
        
        					else if (sentence[i] == ' ') 
        {
            						newWord = true;
        }
        
        
    }

   
cout << "Sentence with first letter of each word capitalized: " << sentence << endl;

    return 0;
}

