#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
 const int SIZE=20;
 char sentence[SIZE];
 cout<<"Enter a sentence (up to 19 characters): ";
 cin.getline(sentence, SIZE);

 int upper_C = 0, lower_C = 0;
 int vowel_Frequency[5] = {0}; 
 bool capitalize_Next = true; 
 for(int i=0; sentence[i]!='\0'; ++i)
  {
   if(sentence[i] >='A' && sentence[i] <='Z')
            upper_C++;
   else if(sentence[i] >='a' && sentence[i] <='z')
            lower_C++;
            
   if(capitalize_Next && (sentence[i] >='a' && sentence[i] <='z')) 
   {
    sentence[i]-=32; 
    capitalize_Next=false;
        }
   char c = sentence[i];
   if(c == 'A' || c == 'a')
   vowel_Frequency[0]++;
   else if (c == 'E' || c == 'e')
   vowel_Frequency[1]++;
   else if (c == 'I' || c == 'i')
   vowel_Frequency[2]++;
   else if (c == 'O' || c == 'o')
   vowel_Frequency[3]++;
   else if (c == 'U' || c == 'u')
   vowel_Frequency[4]++;
   if (sentence[i] == ' ')
    capitalize_Next = true;
    }
    cout<<"Number of uppercase letters: "<<upper_C<<endl;
    cout<<"Number of lowercase letters: "<<lower_C<<endl;
    cout<<"Frequency of each vowel:"<<endl;
    cout<<"A: "<<vowel_Frequency[0]<<endl;
    cout<<"E: "<<vowel_Frequency[1]<<endl;
    cout<<"I: "<<vowel_Frequency[2]<<endl;
    cout<<"O: "<<vowel_Frequency[3]<<endl;
    cout<<"U: "<<vowel_Frequency[4]<<endl;

    cout<<"Modified sentence with first letter of each word capitalized: "<<sentence<<endl;

    return 0;
}

