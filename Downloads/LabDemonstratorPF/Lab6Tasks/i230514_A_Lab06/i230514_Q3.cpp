#include<iostream>
using namespace std;

int main(){
char g,h;
int age;
cout<<"Enter your gender(m/f): ";
cin>>g;
cout<<"Enter your age: ";
cin>>age;
cout<<"do you have health issues:(y/n) ";
cin>>h;

(g=='m')? (age>=25)? cout<<"You can enjoy the ride:\n":cout<<"Sorry! ride is dangerous for you\n":(g=='f')? (age>=25)? (h=='n')?cout<<"you can enjoy the ride":cout<<"Sorry the ride is too dangerous  for you: ":cout<<"Sorry! ride is dangerous for you\n":cout<<"you entered invalid gender:";

cout<<"Age: "<<age<<endl;

return 0;
}
