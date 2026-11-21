#include<iostream>
using namespace std;
int main(){

int temp;
cout<<"Please the enter the temperature in centigrade(C): ";
cin>>temp;

switch(temp>=40)
 {
  case 1:
  cout<<"Temperature is very hot";
  break;
 
  case 0:
      
      switch(temp>=30)
      {
       case 1:
       cout<<"Temperature is hot";
       break;
       
       case 0:
           
           switch(temp>=20)
           {
            case 1:
            cout<<"Temperature is normal";
            break;
            
            case 0:
                
                switch(temp>=10)
                { 
                 case 1:
                 cout<<"Temperature is cold";
                 break;
                 
                 case 0:
                     
                     switch(temp>=0)
                     {
                      case 1:
                      cout<<"Temperature is very cold";
                      break;
                      
                      case 0:
                          
                          switch(temp<0)
                          {
                           case 1:
                           cout<<"Temperature is freezing";
                           }
                            
                            }
                             
                             }
                              
                              }
                               
                               }
                                
                                }
                     
                                 return 0;

                                 }  

