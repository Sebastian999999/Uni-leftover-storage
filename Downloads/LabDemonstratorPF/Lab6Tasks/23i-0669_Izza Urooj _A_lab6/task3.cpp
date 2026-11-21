# include <iostream>
using namespace std;

int main ()
{
int age ;
char gender ;
char health;
cout<<"Enter your gender (Write M for males and F for females )";
cin>>gender ;
cout<<"Enter your age ";
cin>>age ;
cout<<"Do you have health issues.(Enter Y if you have and N if you dont have )";
cin>>health;
(gender == 'M')? (age <25)?cout<<"Yay you can enjoy rides :) "  : cout <<"Sorry these rides are not safe for you :( " :
 (gender == 'F')? 
 (health=='Y')? cout <<"Sorry these rides are not safe for you :( " : cout<<"Yay you can enjoy rides :) " : cout<<"Invalid "<<endl ;
return 0;}
