/*Name: Madiha Shahzad
Roll number: i23-0784
Section: A
Lab 09
Task 03
*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  //Initialization and declaration
  int array1[5],array2[5];
  int size=4,i,j,k,l;
  
  //Input 5 integers into array
  cout<<"Input 5 integers:";
  for(i=0;i<5;i++)
    cin>>array1[i];
  
  //Replacing array with squares of elements
  for(j=0;j<5;j++)
    array1[j]=array1[j]*array1[j];
  
  //Copying this array into another in reverse order
  for(k=0;k<5;k++)
    array2[k]=array1[size-k];
  
  //Displaying original array
  cout<<"\nOriginal array:";
  for (k=0;k<5;k++)
    cout<<array1[k]<<" ";
   
  //Displaying final array
  cout<<"\nThe array in reverse order is:";
  for(l=0;l<5;l++)
   cout<<array2[l]<<" ";
   
  return 0;
}
