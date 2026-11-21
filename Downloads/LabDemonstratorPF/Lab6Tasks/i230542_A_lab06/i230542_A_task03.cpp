#include<iostream>
using namespace std;
int main(){
int age,a=1;
char gender,ch;
cout<<"enter your age:  ";
cin>>age;
cout<<"enter your gender Male(M) or female(F):  ";
cin>>gender;
cout<<"if you are female and have health issues enter y if not enter N:  ";
cin>>ch;
(gender == 'M' || gender == 'm') ? ((age < 25) ? (cout << "You can enjoy the rides. Age: " << age << endl, 1) : (cout << "Sorry, these rides are not safe for you. Age: " << age << endl, 0)) : (a = 0);

(gender == 'F' || gender == 'f') ? ((ch=='Y'||ch=='y') ? (cout << "Sorry, these rides are not safe for you. Age:" << age << endl, 0) : (cout << "You can enjoy the rides. Age: " << age << endl, 1)) : (a = 0);

return 0;
}
