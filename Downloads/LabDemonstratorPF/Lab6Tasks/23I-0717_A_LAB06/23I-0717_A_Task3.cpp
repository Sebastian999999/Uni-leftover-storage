#include<iostream>
using namespace std;

int main()
{
char g,h;
int a;

cout<<"Enter your gender (M) for male and (F) for female="<<endl;
cin>>g;
cout<<"Enter your age="<<endl;
cin>>a;
cout<<"Do you have any health issues(Y/n)"<<endl;
cin>>h;
(g=='M')?((a<=25)?cout<<"Your age="<<a<<endl<<"You can enjoy the rides"<<endl:
cout<<"Your age is="<<a<<endl<<"Sorry, these rides are not safe for you"<<endl):
((g=='F')?((h=='N')?cout<<"Your age="<<a<<endl<<"You can enjoy the rides"<<endl:
cout<<"Your age="<<a<<endl<<"Sorry, these rides are not safe for you"<<endl):
cout<<"Invalid gender input"<<endl);

return 0;
}



