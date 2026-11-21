#include<iostream>
using namespace std;
int main()
{
 int uppercase=0,lowercase=0,vowel=0;
 char sentence[20];
 char arr[20];
 cout<<"Enter a sentence:";
 for (int i=0;i<20;i++)
    { 
     cin>>sentence[i];
     if (cin.get())
        break;
    }
 for (int i=0;i<20;i++)
    {
     if (sentence[i]>='A' || sentence[i]<='Z')
         uppercase++;
     else if (sentence[i]>='a' || sentence[i]<='z') 
             lowercase++;  
    }
 cout<<"number of uppercase characters:"<<uppercase;
 cout<<"number of lowercase characters:"<<lowercase;   
 for (int i=0;i<20;i++)
     {
      if (sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u' || sentence[i]=='A' ||  sentence[i]=='E' || sentence[i]=='I' || sentence[i]=='O' || sentence[i]=='U')
      vowel++; 
     }
     cout<<"Number of vowels:"<<vowel;
  for (int i=0;i<20;i++)
     {
      if (sentence[i]==' ')
         sentence[i+1]-=32;
     }    
  cout<<"Capitalized version:";   
  for (int i=0;i<20;i++)
      {
       cout<<sentence[i];
      }   
 return 0;
}
