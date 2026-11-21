
         //MUHAMMAD ANAS , 23i-0771
         //     SECTION A 
         //     LAB 06 Task 02

#include<iostream>
using namespace std;
int main(){

char choice;
cout<<"Input : ";
cin>>choice;

 switch(choice){
 case '1'...'9':
 cout<<"You have input a digit."<<endl;
 break;
 case 'A'...'Z':
 cout<<"You have input an uppercase alphabet."<<endl;
 break;
 case 'a'...'z':
 cout<<"You have input a lowercase alphabet."<<endl;
 break;
 default : 
 cout<<"Invalid input."<<endl;
 
 break;
 }

return 0;
}
