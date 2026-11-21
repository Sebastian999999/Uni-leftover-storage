// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #6

#include <iostream>
using namespace std;

int main()
{
  char character;
  cout << "Enter a character: ";
  cin >> character;

  // use bool to check if character is a digit or a letter
  bool isDigit = character >= '0' && character <= '9';
  bool isChar = (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z');

  switch (isDigit)
  {
  case true:
    cout << "Character is a digit!" << endl;
    break;
  default:
    switch (isChar)
    {
    case true:
      cout << "Character is a letter!" << endl;
      break;
    default:
      cout << "Invalid input!" << endl;
      break;
    }
  }

  return 0;
}