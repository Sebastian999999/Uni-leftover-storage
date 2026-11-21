//Zibyah Ahmad
//23I-0734
//Q3-CS A
#include<iostream>
using namespace std;
int main()
{
  char ch,h;
  int age;
  cout<<"Enter Your Gender (F or M)"<<endl;
  cin>>ch;
  cout<<"Enter your age"<<endl;
  cin>>age;
  cout<<"Enter Y if you have health issues N for no "<<endl;
  cin>>h;
  (ch=='M')? (age<=25)? cout<<"You can enjoy the rides, Your age is :"<<age<<" years":cout<<"Sorry these rides are not safe for you, Your age is"<<age
              :(h=='Y')?
  cout<<"Sorry these rides are not safe for you, Your age is :"<<age<<" years": cout<<"You can enjoy the rides, Your age is :"<<age<<" years";
  cout<<endl;
 
  return 0;
  }
