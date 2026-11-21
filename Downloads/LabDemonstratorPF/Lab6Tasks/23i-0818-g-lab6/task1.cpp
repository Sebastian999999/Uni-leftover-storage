#include <iostream>
using namespace std;
int main()
{

  cout <<"Menu" << endl <<"1.Addition" <<endl <<"2.Subtraction" <<endl <<"3.Multiplication" <<endl << "4.Division" <<endl << "5.Modulus" <<endl; 
  
  
  int num1 , num2 , operation ;
  
  cout <<"Enter num1:" <<endl ;
  
  cin >> num1;
  
  cout << "Enter num2:" <<endl ;
  
  cin >> num2; 
  
  cout <<"Select operation"<<endl;
  
  cin >> operation;
  switch(operation)
  {
   
   case 1: 
   
   cout << "Addition" << num1 + num2;
   
   break;
   
   case 2: 
   
   cout << "Subtraction" << num1 - num2;
   
   break;
   
   case 3: 
   
   cout << "Multip;ication" << num1 * num2;
   
   break;
   
   case 4: 
    
   cout << "Division: " << (num2 != 0 ? num1 / num2 : -1);
   
   break;
   
   case 5: 
   
   cout <<"Modulus" << num1 % num2;
   
   break;
   
   default :
   
   cout <<"Invalid operation";
   }
   return 0;
   
   }
 
   
  
  
  
  
