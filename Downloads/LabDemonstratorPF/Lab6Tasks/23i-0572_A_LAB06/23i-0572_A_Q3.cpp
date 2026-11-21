#include<iostream>
using namespace std;

int main() {
// Muhammad Arslan 23i-0572_A
 cout<<"Are you a male or a female?" << endl;
char gender;
cin>>gender;

(gender == 'M' || gender == 'm') ?
(cout<<"Enter your age: ", true) :
(gender == 'F' || gender == 'f') ?
(cout<<"Do you have health issues? (Y/N): ", false) :
(cout<<"Invalid choice entered!", false);

int age;
cin>>age;

(gender == 'M' || gender == 'm') ?
(age < 25 ? cout<<"You can enjoy the rides as your age is "<<age<<"\n" : cout<<"Sorry, these rides are not safe for you as your age is "<<age<<"\n") :
(gender == 'F' || gender == 'f') ?
(age < 25 ? cout<<"You can enjoy the rides. Your age="<<age<<"\n" : cout<<"Sorry, these rides are not safe for you.Your age="<<age<<"\n") :
(cout<<"Invalid choice entered!\n");

return 0;
}

