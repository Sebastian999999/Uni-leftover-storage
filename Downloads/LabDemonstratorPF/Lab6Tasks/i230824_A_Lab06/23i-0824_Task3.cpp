#include <iostream>
#include <string>
using namespace std;
int main()
{
 char gender;
 int age;
 string healthIssues;

 cout<<"Enter gender(M/F): ";
 cin>>gender;

 cout<<"Enter age: ";
 cin>>age;

 cout<<"Age: "<<age<<", ";
 cout<<(gender == 'M' || gender == 'm' ? (age < 25 ? "You can enjoy the rides." : "Sorry, these rides are not safe for you.") : (gender == 'F' || gender == 'f' ? ((cout << "Do you have health issues? (Y/N): ", cin >> healthIssues), healthIssues == "N" || healthIssues =="n"? "You can enjoy the rides.":"Sorry, these rides are not safe for you."):"Invalid gender entered."))<<endl;

    return 0;
}

