// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
using namespace std;

int main()
{
  char name [] = "saleh";
  int count = 0;
  for (int i =0; i < 5; i++)
  {
    if (name[i] == 'a')
        count ++;
  }
  
  cout << "There are " << count << " a's in my name";

  return 0;
}