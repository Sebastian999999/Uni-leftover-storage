#include <iostream>
//Zain Ul Arifeen SUkhera 23i-0750 CS-A
using namespace std;
int main()
{

//initialisation
int age;
char gender, health;
cout<<"Enter your age"<<endl;
cin>>age;
cout<<"Do you have health issues? Y/N"<<endl;
cin>>health; 
cout<<"Enter your gender (F/M)"<<endl;
cin>>gender;

(gender=='M' && age>=25)?cout<<"you can enjoy these rides\n":cout<<"You cannot enjoy these rides\n";

(gender=='F' && health=='N' && age>= 25)?cout<<"you can enjoy these rides\n"<<"the age is "<<age:cout<<"You cannot enjoy these rides\n"<<"the age is "<<age;



return 0;
}





