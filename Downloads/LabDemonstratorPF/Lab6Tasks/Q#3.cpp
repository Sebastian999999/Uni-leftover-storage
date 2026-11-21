#include<iostream>
using namespace std;
int main()

{
int age;
string gender;
string ch;

cout<<"AGE? "<<endl;
cin>>age;
cout<<age;
cout<<"Gender?"<<endl;
cin>>gender;
cout<<gender;
 cout << (gender == "Male" ? (age >= 25 ? "You can enjoy the ride." : "Sorry these rides are unsafe for you") : (gender == "Female" ? (cout << "Health issues? ", cin >> ch, (ch == "yes" ? "You cannot enjoy the ride." : "You can enjoy the ride.")) : "Invalid gender.")) << endl;


return 0;

}
