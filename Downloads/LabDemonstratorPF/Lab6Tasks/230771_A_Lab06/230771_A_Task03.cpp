
         //MUHAMMAD ANAS , 23i-0771
         //     SECTION A 
         //     LAB 06 Task 03

#include<iostream>
using namespace std;
int main(){
 int Age;
 char Gender;
 int result;
 char choice;
cout<<"Please input your age: ";
cin>>Age;
cout<<"Please input your gender: ";
cin>>Gender;
switch(Gender){
 case 'M' :
 cout<<"What is your age?"<<endl;
 cout<<Age<<endl;
 (Age<=25) ? cout<<"Your age is "<<Age<<". You can enjoy the rides."<<endl : cout<<"Your age is "<<Age<<". Sorry these rides are not safe for you."<<endl;
 break;
 case 'F':
 cout<<"Do you have health issues?"<<endl;
 cin>>choice;
  switch(choice){
   case 'Y':
   cout<<"Your age is "<<Age<<"and You have health issues. Sorry these rides are not safe for you."<<endl;
   break;
   case'N':
   cout<<"Your age is "<<Age<<" and You don't have health issues. You can enjoy the rides."<<endl;
   break;
   default : cout<<"Invalid Input."<<endl;
   break;
   }
 break;
 default : 
 cout<<"Invalid Input."<<endl;
 break;
 }
 

return 0;
}
