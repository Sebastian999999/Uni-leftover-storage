// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
using namespace std;

int main()
{

  int array [5] = {321, 2345, 4, 876, 54};
  
  // loop through and get significant number

  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
     while (array[i] >= 10) {
        array[i] /= 10;
      }
      sum += array[i];
      if (i == 4)
        cout << array[i] << " = " << sum << endl;
      else 
        cout << array[i] <<  " + ";
  }

  return 0;
}