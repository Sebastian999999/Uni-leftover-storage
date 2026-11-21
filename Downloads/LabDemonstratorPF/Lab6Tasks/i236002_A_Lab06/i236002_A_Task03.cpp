#include <iostream>
using namespace std;

int main()
{

int age;
char gen;
char issue;

cout<<"ENTER F FOR FEMALE AND M FOR MALE"<<endl;
cin>>gen;

cout<<"ENTER AGE:"<<endl;
cin>>age;

cout<<"TELL IF YOU HAVE HEALTH ISSUE (Y FOR YES AND N FOR NO)"<<endl;

cin>>issue;

(gen=='M')?((age<25)?cout<< "YOU CAN ENJOY RIDES":cout<<"YOU CANNOT ENJOY RIDES"): ((issue=='Y')? cout<<"THIS RIDE IS NOT FOR YOU " : cout<<"YOU CAN ENJOY THE RIDE");


return 0;
}

