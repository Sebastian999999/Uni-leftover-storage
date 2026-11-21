#include <iostream>
using namespace std;

int main() {
int num1,num2;
char ch;
cout<<"MENU "<<endl;
cout<<"--------------------------------"<<endl;
cout<<"+ ADDITION\n- SUBTRACTION\n* MULTIPLICATION\n/ DIVISION\n. CANCEL\n";
cout<<"--------------------------------"<<endl;
cout<<"ENTER 1st NUMBER = ";
cin>>num1;
cout<<"ENTER 2nd NUMBER = ";
cin>>num2;
cout<<"ENTER OPERATION = ";
cin>>ch;

if(ch == '/' && num2==0){
cout<<"number 2 can't be zero \n try again !"<<endl;
cout<<"ENTER 2nd NUMBER AGAIN = ";
cin>>num2;
} 

cout<<"--------------------------------"<<endl;

switch (ch){
    case '+':
    cout<<num1<<'+'<<num2<<" = "
        <<num1 + num2<<endl;
    break;
    
    case '-':
    cout<<num1<<'-'<<num2<<" = "
        <<num1 - num2<<endl;
    break;
    
     case '*':
    cout<<num1<<'*'<<num2<<" = "
        <<num1 * num2<<endl;
    break;
    
     case '/':
    cout<<num1<<'/'<<num2<<" = "
        <<num1 / num2<<endl;
    break;
    
    default:
    cout<<"input correct choice \n";
}
    return 0;
}