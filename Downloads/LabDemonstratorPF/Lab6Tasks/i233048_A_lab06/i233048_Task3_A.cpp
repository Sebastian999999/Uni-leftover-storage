#include<iostream>
using namespace std;
int main()
{
 //Imama Sarwar 23i-3048
 char ch,ch1,a,b;
 int age;
 //taking inputs
 cout<<"kindly enter your gender. M for male and F for female: ";
 cin>>ch;
 cout<<"Great! Now enter your age: ";
 cin>>age;
 
 ch=='M'?age<25?(cout<<"You can enjoy the ride\n",0):age>=25?(cout<<"Sorry it wont be safe for you\n",0):1:0; //checking if male is <25 then its safe otherwise no.
 
 //? (,0):1 is being done because ternary operator expects same type of expressions on both sied of : . I had to d cout in case of true and there was quite nothing to do in the falde cases especially when there were multiple ternaries. So i used this logic which i ealier used in my assignment 1
 
 ch=='F'?(cout<<"Do you have any health issues? Enter Y for yes and N for No ",0):1; //checking if the female has health issues
 cin>>ch1;
 ch1!=('Y' || 'N' || 'n' || 'y')? (cout<<"enter valid character\n",1):0;
 ch1=='Y'?(cout<<"Sorry these rides are not safe for you\n"):(cout<<"You can enjoy your ride\n"); //if she does then no otherwise enjoy
 
 }
