// Name: Abdul Mateen    Roll no: 23i-0752
#include<iostream>
using namespace std;

int main(){

    int age;
    char gender;
    char ch;
    cout<<"Enter your gender (M/F)";
    cin>>gender;

    ((gender=='M')?(cout<<"Enter your age ",cin>>age):(cout<<"Do you have healt issues? (Y/N) ", cin>>ch));
    (gender=='M')?((age<25)? cout<<"You can enjoy the rides":cout<<"Sorry these rides are not safe for you "):((ch=='Y')?cout<<"Sorry these rides are not safe for you":cout<<"you can enjoy the rides");

    return 0; 

}