#include<iostream>
using namespace std;
int main()
{
int age;
char gender , ans;
cout<<"Enter your age : ";
cin>>age;

cout<<"Enter your gender (M for male and F for female) : ";
cin>>gender;

cout<<"Do you have any health  issues (Enter Y for yes and N for no) : ";
cin>>ans;

(gender == 'M' || gender == 'm' ) ? (age < 25)? cout<<"age :"<<age<<endl<<"You can enjoy the rides" :cout<<"age :"<<age<<endl<<"Sorry, these rides are not safe for you"<<endl :((ans == 'Y' || ans == 'y')&& (gender == 'F' || gender == 'f'))?cout<<"Sorry, these rides are not safe for you "<<endl:cout<<"You can also  enjoy the rides"<<endl;


	
return 0;
}
