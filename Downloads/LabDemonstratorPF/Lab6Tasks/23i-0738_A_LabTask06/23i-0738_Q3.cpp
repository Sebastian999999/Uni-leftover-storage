#include <iostream>
using namespace std;
int main(){
   int age;
   char gender,health;
   cout<<"Enter age :";
   cin>>age;
   cout<<"Gender :";
   cin>>gender;
    cout<<"Health Issue:";
   cin>>health;
   (gender!='M' || gender!='F')?cout<<"Enter a valid gender"<<endl:cout<<endl;
   (age<1)?cout<<"Enter a valid age"<<endl:cout<<' ';
   (health!='Y' || health!='N')?cout<<"Enter a valid input"<<endl:cout<<endl;
   (gender=='M')?(age>=25)?cout<<"You can enjoy the rides"<<endl:cout<<"Sorry these rides ar not save for you"<<endl:(health=='Y')?cout<<"Sorry these rides ar not save for you"<<endl:cout<<"You can enjoy these rides"<<endl;
   (gender=='M')?cout<<"The age of male is :"<<age<<endl:cout<<"The age of female is :"<<age<<endl;
   return 0;
}   
