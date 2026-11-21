	//Zoha Fatima
	//23i-0823
#include<iostream>
using namespace std;
int main(){

char gender  , health;
int age;


cout<<"Enter your gender (M/F):";
cin>>gender;
cout<<"Enter your age: ";
cin>>age;
cout<<"Do you have health issues? (Y/N) ";
cin>>health;

(gender =='M') ? (age >= 25) ? cout<<"Sorry! these rides are not safe for you.\nAge:"<<age<<endl : cout<<"You can enjoy the rides\nAge:"<<age<<endl : (health == 'Y') ? cout<<"Sorry! these rides are not safe for you.\nAge:"<<age<<endl : cout<<"You can enoy the rides.\nAge:"<<age<<endl;


return 0;
}
