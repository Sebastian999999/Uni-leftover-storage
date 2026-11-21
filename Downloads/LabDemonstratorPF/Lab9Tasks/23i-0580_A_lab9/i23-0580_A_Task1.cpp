#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  
  cout << "Enter 5 integers (between 1-9)" << endl;
  
  for(int i=0 ; i<5 ; i++)
  {
    cin >> arr[i];
    while(arr[i] <= 1 || arr[i] >= 9) 
    {
      cout << "Invalid input. Please try again (between 1-9)" << endl;
      cin >> arr[i]; 
    }
  }
  
  int key;
  cout << "Give a number to find in array: " << endl;
  cin >> key;
  
  bool present = false;
  for(int i=0 ; i<5 ; i++)
  {
    if(arr[i] == key)
    {
      present = true;
      break; 
    } 
  }
  
  if(present)
  {
    cout << "The number you entered is present" << endl;
  }
  else 
  {
    cout << "The number you entered is not present" << endl;
  }
  
  return 0;
}

