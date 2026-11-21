#include<iostream>
using namespace std;
int main()
{

char gen,x;
int age;
int a = 0;

int b = a > 0 ? 1 : 3;

cout<<"Enter your gender"<<endl;
cout<<"Enter M for male and F for female: "<<endl;
cin>>gen;
cout<<"Enter your age "<<endl;
cin>>age;
cout<<"Do you have health issues?"<<endl;
cin>>x;

(gen=='M')?


((age<25)?(cout<<"You can enjoy the rides"):(cout<<"Sorry, these rides are not safe for you.")):



((x=='Y')?(cout<<"Sorry, these rides are not safe for you."):(cout<<"You can enjoy the rides."<<endl));










return 0;
}
