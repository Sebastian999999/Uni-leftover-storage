/*Name: Madiha Shahzad
Roll number: i23-0784
Section: A
Lab 09
Task 01
*/
#include <iostream>
using namespace std;
int main ()
{
  //Initialization and Declaration
  int arr[5],num,flag=0;
  
  cout<<"Input 5 integers into array:";
  
  //Inputs 5 integers into array
  for(int i=0;i<5;i++)
   cin>>arr[i];
  
  //Asks for the integer to check
  cout<<"What integer do you want to check?"<<endl;
  cin>>num;
  
  //Searches for that integer
  for(int j=0;j<5;j++)
  {
    if(arr[j]==num){
      cout<<num<<" is present at position "<<j<<endl;
      flag=1;
      break;}
  }
  if(flag==0)
    cout<<num<<" is not present in this array"<<endl;
    
   return 0;
  }
