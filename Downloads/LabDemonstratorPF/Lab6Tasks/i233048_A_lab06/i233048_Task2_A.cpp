#include<iostream>
using namespace std;
int main()
{
//Imama Sarwar 23i-3048
 int character,digit;
 int num;
 //taking input
 cout<<"Enter a digit ";
 cin>>num;
 //checking for the conditions. Didnt initialize with bool because it gave a warning 
 character=(num>=65 && num<=90) || (num>=97 && num<=122);
 digit=(num<=48 && num>=57);
 
 //now checking the conditions inorder to get a desired output acc to the conditions given 
 switch(character)
 {
  case 0:
  cout<<"Entered number is a digit"<<endl; //if the condition for input being a character is false it would yield zero so this would be the output
  break;
  case 1:
  cout<<"You entered a character"<<endl; //incase of true this is the output
  break;
  switch(digit)    //switch inorder to check if it is a digit
  {
  case 0:
  cout<<"You entered a chracter"<<endl;  //if the condition for input being a digit is false it would yield zero so this would be the output
  break;
  case 1:
  cout<<"You entered a digit"<<endl;     //incase of true this is the output
  break;
  default:
  cout<<"Invalid Entry. Kindly enter a valid number\n";
  }
  default:
  cout<<"Kindly enter a valid number\n";
  }
  return 0;
}
  
