#include <iostream>

using namespace std;  

int tripleCallByValue(int);
void tripleByReference(int &);

int main()
 {
  
  
int number;

  
cout << "Enter a number: ";
  
cin >> number;
  

cout << "Before call-by-value: number = " << number << endl;

  
int tripledValue = tripleCallByValue(number);



 cout << "After call-by-value: number = " << number << ", tripledValue = " << tripledValue << endl; // number will be same but another variable triple value shows 3x number

  
  cout << "\nBefore call-by-reference: number = " << number << endl;

  
  tripleByReference(number); // modifies the original number variable

 
  cout << "After call-by-reference: number = " << number << endl;

  return 0;
}



int tripleCallByValue(int num)
 {
  return num * 3;
}


void tripleByReference(int &num)
{
  num *= 3;
}

