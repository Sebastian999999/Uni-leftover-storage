/*Name: Madiha Shahzad
Roll number: i23-0784
Section: A
Lab 09
Task 02
*/
#include <iostream>
using namespace std;
int main ()
{
  //Initialization and Declaration
  char name[6]={'m','a','d','i','h','a'};
  int count=0;
  
  //Checking the occurence of 'a'
  for(int i=0;i<6;i++)
  {
    if(name[i]=='a')
      count++;
  }
  
  //Displaying the number of a's
  cout<<"Number of a's="<<count<<endl;
  
  return 0;
}
