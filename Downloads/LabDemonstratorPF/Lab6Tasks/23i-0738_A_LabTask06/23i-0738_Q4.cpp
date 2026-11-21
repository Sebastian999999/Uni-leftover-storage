#include <iostream>
using namespace std;
int main(){
     int temp;
     cout<<"Enter temperature :";
     cin>>temp;
     switch(temp>=40 && temp<=100){
      case true:
      cout<<"Very hot"<<endl;
      break;
      case false:
        switch(temp>=30 && temp<40){
      case true:
      cout<<"Hot"<<endl;
      break;
      case false:
        switch(temp>=20 && temp<30){
      case true:
      cout<<"Normal"<<endl;
      break;
      case false:
        switch(temp>=10 && temp<20){
      case true:
      cout<<"Cold"<<endl;
      break;
      case false:
        switch(temp>0 && temp<10){
      case true:
      cout<<"Very cold"<<endl;
      break;
      case false:
        switch(temp>=-100 && temp<=0){
      case true:
      cout<<"Freezing"<<endl;
      break;
      case false:
      cout<<"Invalid INPUT"<<endl;
        }
      }
        }
      }
        }
      }
        
   return 0;
}   
