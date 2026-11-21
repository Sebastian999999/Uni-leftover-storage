//Zibyah Ahmad
//23I-0734
//Q2-CS A
#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter a character"<<endl;
  cin>>ch;
   switch( ((int)ch>=65 && (int)ch<=90 )  || ((int) ch>=97 && (int)ch<=122) )
   {
     case 1:cout<<"The Character is an alphabet"<<endl;
            break;
     case 0:
            switch(int(ch) >=48 && int (ch)<=57)
            {
              case 1: cout<<"The Character is an digit "<<endl;
           		    break;
     
     	     case 0:cout<<"Invalid Input"<<endl;
     	                   break;
             }
             break;
   }
  return 0;
  }
