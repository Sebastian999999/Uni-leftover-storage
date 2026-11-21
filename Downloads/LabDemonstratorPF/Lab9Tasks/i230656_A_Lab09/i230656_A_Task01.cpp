#include<iostream>
using namespace std;
int main() {

  int numbers[5];
  int input;
  
  
  for (int i = 0; i < 5; i++) {
    cout << "Enter a number: ";
    cin >> numbers[i];
    
    if(numbers[i]>=1 && numbers[i]<=9) 
     continue;
     
    else {
     cout<<"Please enter a valid number: " << endl;
     cin>>numbers[i]; }
  }

  cout << "Enter a number to check if it's in the array: ";
  cin >> input;

  
  bool found = false;
  
  for (int i = 0; i < 5; i++) {
  
    if (numbers[i] == input) {
      found = true;
      break;
    }
  }
  
  
  if (found) {
    cout << "The number is in the array" << endl;
  } else {
    cout << "The number is not in the array" << endl;
  }

  return 0;
}


