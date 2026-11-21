#include <iostream>
using namespace std;
int main() 
{
char gender,health_issues;
int age;
cout<<"Enter your gender (M/F): ";
cin>>gender;
cout << "Enter your age: ";
cin >> age;
(gender == 'M') ? ((age < 25) ? cout << "You can enjoy the rides. " : cout << "Sorry, these rides are not safe for you. ") : ((gender == 'F') ? ((cout << "Do you have any health issues? (Y/N): ") && (cin >> health_issues) && (health_issues == 'Y') ? cout << "Sorry, these rides are not safe for you. "<<endl: cout << "You can enjoy the rides. "<<endl) : cout << "Invalid gender. ");
cout << "Your age is " << age << "." << endl;
return 0;
}

