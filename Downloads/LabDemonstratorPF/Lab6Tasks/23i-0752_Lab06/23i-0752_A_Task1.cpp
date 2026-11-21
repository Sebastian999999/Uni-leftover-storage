// Name: Abdul Mateen     Roll no: 23i-0752
#include<iostream>
using namespace std;
int main(){
  
  float num1,num2;
  char choice;
  cout<<"menu"<<endl;
  cout<<"---------------------"<<endl;
  cout<<"+ Addition"<<endl;
  cout<<"- Subtraction"<<endl;
  cout<<"* Multiplication"<<endl;
  cout<<"/ Division"<<endl;
  cout<<". Cancel"<<endl;
  cin>>choice;
  cout<<"Enter the number 1"<<endl;
  cin>>num1;
  cout<<"Enter number 2"<<endl;
  cin>>num2;
  switch(int(choice)){
  case '+':
  cout<<num1+num2;
   break;
  case '-':
   cout<<num1-num2;
   break;
  case '*':
  cout<<num1*num2;
  break;
  case '/':
  switch(int(num2)){
  case 0:
  cout<<"Invalid Denominator"<<endl;
  break;
  default:
  cout<<num1/num2;
  break;
  }
  break;
  case '.':
  cout<<"Cancelled"<<endl;
  }
  
return 0;

}
