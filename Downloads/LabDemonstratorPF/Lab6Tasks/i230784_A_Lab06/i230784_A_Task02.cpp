/* Name: Madiha Shahzad
Roll Number: i23-0784
Section: A
Lab06
Task 2 */

#include <iostream>
using namespace std;
int main()
{
  char ch;
  
  cout<<"Enter a character:";
  cin>>ch;
  
  switch(ch>=65 && ch<=90)
  {
    case 1:
      cout<<"You have entered an uppercase alphabet"<<endl;
      break;
  }
  
  switch(ch>=97 && ch<=122)
  {
    case 1:
      cout<<"You have entered a lowercase alphabet"<<endl;
      break;
  }  
  
  switch(ch>=48 && ch<=57)
  {
    case 1:
      cout<<"You have entered a digit"<<endl;
      break;
  }
  
  switch (!(ch>=65 && ch<=90) && !(ch>=97 && ch<=122) && !(ch>=48 && ch<=57))
  {
    case 1:
      cout<<"Invalid input"<<endl;
  }
  
  return 0;
 }
    
