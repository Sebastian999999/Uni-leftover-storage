// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
using namespace std;

int main()
{

  int array [5] = {321, 2345, 4, 876, 54};
  
  // loop through and display max and min

  int min = array[0];
  int max = array[0];
  for (int i = 1; i < 5; i++)
  {
     if (array[i] > max)
        max = array[i];
     if (array[i] < min)
        min = array[i];
  }

  cout << "Min value " << min << endl;
  cout << "Max value " << max << endl;

  return 0;
}