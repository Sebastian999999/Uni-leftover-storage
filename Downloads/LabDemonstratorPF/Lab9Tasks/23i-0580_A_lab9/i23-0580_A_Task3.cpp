#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Enter 5 integers" << endl;
  
  int arr[5];
  
  for(int i=0; i<5 ; i++)
  {
     cin >> arr[i];
  }
  
  cout << "The array you entered is: " ;
  for(int i=0; i<5 ; i++)
  {
     cout << arr[i] << " ";
  }
  cout << endl;
  
  for(int i=0; i<5 ; i++)
  {
    arr[i] = pow (arr[i] , 2);
  }
  
  cout << "After taking square the array becomes: ";
  for(int i=0; i<5 ; i++)
  {
     cout << arr[i] << " ";
  }
  cout << endl;
  

  int arr2[5];
  int j=0;
  for(int i=4; i>=0 ; i--)
  {
     arr2[i]=arr[j];
     j++;
  }
   
  cout << "The 2nd array in reverse order: " ;
  for(int i=0; i<5 ; i++)
  {
     cout << arr2[i] << " ";
  }  
  cout << endl;	

  return 0;
}

