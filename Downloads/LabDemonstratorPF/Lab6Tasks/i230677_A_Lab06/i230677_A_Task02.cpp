#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<<"Enter a character:";
 cin>>ch;
 switch(ch>=65 && ch<=90){
     case 1:
        cout<<"It is an uppercase letter"; 
        break;
     case 0:
        switch (ch>=97 && ch<=122){
           case 1:
             cout<<"It is a lowercase letter";
             break;
           case 0:
               switch (ch>=48 && ch<=57){
                   case 1:
                      cout<<"It is a number";
                      break;
                   case 0:
                      cout<<"Invalid input";
                      break;     
               }
               break;  
        }            
        break;
}
 return 0;
} 

