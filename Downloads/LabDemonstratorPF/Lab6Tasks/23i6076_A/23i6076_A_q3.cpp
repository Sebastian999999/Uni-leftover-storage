#include <iostream>
using namespace std;

int main() 
{
char gender;
int age;
char health_issues;
    
cout << "Enter your gender : "<<endl;
cout<<"Input capital (M) for male"<<endl;
cout<<"Input capital (F) for female"<<endl;
cin >> gender;
    
cout << "Enter your age: ";
cin >> age;
    
switch (gender) 
{
case 'M':
(age <= 25) ? (cout << "You can enjoy the rides. Your age is: " << age) :(cout << "Sorry, these rides are not safe for you. Your age is: " << age)<<endl;
break;

case 'F':
cout << "Do you have health issues? (Y/N): ";
cin >> health_issues;
(health_issues == 'Y') ? (cout << "Sorry, these rides are not safe for you. Your age is: " << age) : 
(cout << "You can enjoy the rides. Your age is: " << age)<<endl;
break;

default:
cout << "Invalid input"<<endl;
}
    
   
    return 0;
}

