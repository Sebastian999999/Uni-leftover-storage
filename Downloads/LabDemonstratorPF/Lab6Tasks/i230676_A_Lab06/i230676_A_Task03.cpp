#include <iostream>
using namespace std;
int main()
{

int age;
char gender,health;
cout<<"Enter Your age: "<<endl;
cin>>age;
cout<<"Enter Gender M(male) or F(female): "<<endl;
cin>>gender;
(gender=='M') ?((age > 25) ?cout<<"Sorry, these rides are not safe for you." : cout << "You can enjoy the rides.") :((gender=='F') ? (cout<<"Do you have health issues? (Y/N): ", cin>>health,(health=='Y') ? cout<<"Sorry, these rides are not safe for you.":cout<<"You can enjoy the rides.") :cout<<"Invalid input.");


 
 
 
 

return 0;
}
