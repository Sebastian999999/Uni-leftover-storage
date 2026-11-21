#include <iostream>
using namespace std;
int main() 
{
 char ch;
  cout<<"Enter a character: ";
  cin>>ch;

  switch(ch)
   {
   case '0'...'9':
   cout<<"Digit"<<endl;
   break;
   
   case 'A'...'Z':
   case 'a' ... 'z':
   cout << "Alphabet" << endl;
   break;
   
   default:
   cout<<"Invalid Input"<<endl;
   break;
    }

    return 0;
}

