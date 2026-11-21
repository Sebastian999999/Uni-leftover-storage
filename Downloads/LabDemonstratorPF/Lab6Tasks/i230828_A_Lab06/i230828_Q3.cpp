#include<iostream>
using namespace std; 
int main() {

int age;
char gen, issues;

cout<<"\nEnter your gender, 'M' for male and 'F' for female: \n";
cin>> gen;
cout<<"\nEnter your age: ";
cin>>age;


cout << ((gen == 'M') ? 
                    ((age < 25) ? "You can enjoy the rides" : "Sorry, these rides are not safe for you") : 
                    ((gen == 'F') ? 
                        ((cout << "Do you have health issues? (Y/N): ", cin >> issues, issues == 'N') ? 
                            "You can enjoy the rides" : "Sorry, these rides are not safe for you") : 
                        "Invalid gender entered")) << endl;

cout<<"Age is : "<<age<< endl ;
return 0;

}
