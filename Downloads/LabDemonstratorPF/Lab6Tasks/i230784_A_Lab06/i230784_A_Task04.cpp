/* Name: Madiha Shahzad
Roll Number: i23-0784
Section: A
Lab06
Task 4 */

#include <iostream>
using namespace std;
int main ()
{
  float temp;
  
  cout<<"Enter temperature in centigrade:";
  cin>>temp;
  
  switch(temp>=40)
  {
    case 1:
      cout<<"Very hot"<<endl; break;
  }
  switch(temp>=30 && temp<40)
  {
    case 1:
      cout<<"Hot"<<endl; break;
  }
  switch(temp>=20 && temp<30)
  {
    case 1:
      cout<<"Normal"<<endl; break;
  }
   switch(temp>=10 && temp<20)
  {
    case 1:
      cout<<"Cold"<<endl; break;
  }
  switch(temp>=0 && temp<10)
  {
    case 1:
      cout<<"Very cold"<<endl; break;
  }
   switch( temp<0)
  {
    case 1:
      cout<<"Freezing"<<endl; break;
  } 
return 0;
}
