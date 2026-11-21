#include <iostream>
using namespace std;

int main() {
char gender;
int age;
char issues;
cout<<"Enter your gender (m/f): ";
cin>>gender;
cout<<"Enter your age: ";
cin>>age;
(gender=='m'&&age<25)?cout<<"Sorry, these rides are not for you.\n":cout<<"Enjoy the rides.\n";
(gender=='m')?cout<<"Age is "<<age:cout<<" ";


(gender=='f')?(cout<<"Do you have health issues (y/n)? ",cin>>issues,(issues=='y')?cout<<"Sorry, these rides are not for you\n": cout<<"Enjoy the rides.\n"):cout<<"";

return 0;
}

