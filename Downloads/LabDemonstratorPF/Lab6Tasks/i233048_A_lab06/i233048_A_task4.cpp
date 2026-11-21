#include<iostream>
using namespace std;
int main()
{
//Imama Sarwar 23i-3048
 int temp,a,b,c,d,e,f;
 //taking temperature as input
 cout<<"Enter temperature: ";
 cin>>temp;
 //checking all the conditions. Didnot intialize a,b,c.. as bool because it gave a warning 
 a=temp>=40;
 b=temp>=30 && temp<40;
 c= temp<30 && temp>=20;
 d=temp>=10 && temp<20;
 e=temp>=0 && temp<10;
 f=temp<0;
 
 //now applying switch on them inorder to get the desired output according to the given conditions
 switch(a)
 {
 case 1:                //if the a condition is true then very hot 
 cout<<"Very hot\n";
 break;
  case 0:              //otherwise check for other conditions. Same logic is applied throughout
  {
   switch(b)
   {
    case 1:
    cout<<"Hot\n";
    break;
    case 0:
    {
     switch(c)
     {
      case 1:
      cout<<"normal\n";
      break;
      case 0:
      {
       switch(d)
       {
        case 1:
        cout<<"Cold\n";
        break;
        case 0:
        {
         switch(e)
         {
         case 1:
          cout<<"Very cold\n";
          break;
          case 0:
          {
           switch(f)
           case 1:
           cout<<"Freezing\n";
           break;
           default:
           cout<<"Enter a valid temperature";
           break;
          }
         }
        }
       }
      }
     }
    }
   }
  }
 }
 return 0;
}
          
