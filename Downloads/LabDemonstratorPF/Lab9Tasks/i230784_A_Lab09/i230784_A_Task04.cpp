/*Name: Madiha Shahzad
Roll number: i23-0784
Section: A
Lab 09
Task 04
*/
#include <iostream>
using namespace std;
int main ()
{
  //Initialization and Declaration
  char array[20];
  int upper=0,lower=0,vowel[5]={0,0,0,0,0};
  
  //Inputs sentence into array
  cout<<"Enter a sentence:";
  cin.get(array,20);
  
  //Counts the uppercase and lowercase letters in the sentence
  int i=0;
  while(array[i]!='\0')
  {
  if ((array[i]>='A')&&(array[i]<='Z'))
  upper++;
  else if ((array[i]>='a')&&(array[i]<='z'))
  lower++;
  i++;
  }
  cout<<"Number of uppercase letters="<<upper<<endl;
  cout<<"Number of lowercase letters="<<lower<<endl;
  
  //Prints the frequency of each vowel
  i=0;
  while(array[i]!='\0')
  {
    char c=array[i];
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
    switch(c)
    {
      case 'a':
      case 'A':
       vowel[0]++;
       break;
      case 'e':
      case 'E':
       vowel[1]++;
       break;
      case 'i':
      case 'I':
       vowel[2]++;
       break;
      case 'o':
      case 'O':
       vowel[3]++;
       break;
      case 'u':
      case 'U':
       vowel[4]++;
       break;
    }
    }
    i++;
  }
  cout<<"Vowel a appears "<<vowel[0]<<" times"<<endl;
  cout<<"Vowel e appears "<<vowel[1]<<" times"<<endl;
  cout<<"Vowel i appears "<<vowel[2]<<" times"<<endl;
  cout<<"Vowel o appears "<<vowel[3]<<" times"<<endl;
  cout<<"Vowel u appears "<<vowel[4]<<" times"<<endl;
  
  i=0;
  if ((array[i]>=97)&&(array[i]<=122))
  array[i]=array[i]-32;
  
  while(array[i]!='\0')
  { 
    if(array[i]==' ')
    {
      if ((array[i+1]>=97)&&(array[i+1]<=122))
        array[i+1]=array[i+1]-32;
    }
     i++;
  }
  
  i=0;
  while(array[i]!='\0')
  { 
   cout<<array[i];
   i++;
  }
  return 0;
 }
