
         //MUHAMMAD ANAS , 23i-0771
         //     SECTION A 
         //     LAB 06 Task 04

#include<iostream>
using namespace std;
int main(){
int temp;
cout<<"Input the temperature in Centigrade = ";
cin>>temp;
switch(temp>=40){
  case 1 :
  cout<<"Very Hot"<<endl;
  break;
 case 0 :
   switch(temp<40 && temp>=30){
      case 1:
      cout<<"Hot."<<endl;
      break;
      case 0:
         switch(temp<30 && temp>=20){
           case 1:
           cout<<"Normal."<<endl;
           break;
           case 0:
              switch(temp<20 && temp>=10){
                 case 1:
                 cout<<"Cold."<<endl;
                 break;
                 case 0:
                    switch(temp<10 && temp>=00){
                        case 1:
                        cout<<"Very Cold."<<endl;
                        break; 
                        case 0:
                           switch(temp<0){
                           case 1:
                           cout<<"Freezing."<<endl;
                           break;
                  default : 
                  cout<<"Invalid Input."<<endl;
                  break;}
                    }
                }
             }     
         }
  
  }
return 0;
} 
