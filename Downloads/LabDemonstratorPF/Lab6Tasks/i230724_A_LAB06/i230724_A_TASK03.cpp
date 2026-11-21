// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #6

#include <iostream>
using namespace std;

int main()
{
  int age;
  char gender;
  char health;

  cout << "Enter you age: " << endl;
  cin >> age;
  cout << "Enter gender(M/F): " << endl;
  cin >> gender;

  bool isMale = gender == 'M' || gender == 'm';
  bool isFemale = gender == 'F' || gender == 'f';

  isMale ? (age < 25 ? cout << "You can enjoy the rides!" << endl << "Your age is " << age << endl 
  : cout << "Sorry, these rides are not safe for you." << endl << "Your age is " << age << endl)
  :cout << " ";

  isFemale ? cout << "Do you have any health issues(Y/N)? " << endl : cout << "";
  isFemale && cin >> health;

  isFemale ? health == 'N' ? (cout << "You can enjoy the rides!" << endl << "Your age is " << age)
  : (cout << "Sorry, these rides are not safe for you." << endl << "Your age is " << age)
  : cout << " ";

  return 0;
}