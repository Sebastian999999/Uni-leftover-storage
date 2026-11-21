#include<iostream>
using namespace std;
int main()
{ 

char a;

cout<<"This program will tell user whether the entered input is a alphabet or a digit\n";
  
cin>>a;
  
switch(a>=122)
  {
   case 1:
   cout<<"Invalid Input\n";
   break;
   case 0:
       switch(a>=97)
       {
        case 1:
        cout<<"Entered input is an alphabet (lowercase)\n";
        break;
        case 0:
            switch(a>=91)
            {
             case 1:
             cout<<"Invalid Input\n";
             break;
             case 0:
                 switch(a>=65)
                 {
                 case 1:
                 cout<<"Entered input is an alphabet (uppercase)\n";
                 break;
                 case 0:
                     switch(a>=58)
                     {
                      case 1:
                      cout<<"Invalid Input\n";
                      break;
                      case 0:
                          switch(a>=48)
                          {
                           case 1:
                           cout<<"Entered input is a digit\n";
                           break;
                           case 0:
                               switch(a>=0)
                               {
                                case 1 :
                                cout<<"Invalid Input\n";
                                break;
                                
                                case 0 :
                                cout<<"Invalid Input\n";
                                break;
                                }
                                 }
                                  }
                                   }
                                    }
                                     }
                                      }
                                     
                                     return 0;
                                     }

  
