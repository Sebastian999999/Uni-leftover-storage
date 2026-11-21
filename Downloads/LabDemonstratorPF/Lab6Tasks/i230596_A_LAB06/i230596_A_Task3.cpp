#include<iostream>
using namespace std;
int main()
{
char gen;
cout<<"Male(M)\nFemale(F)\nENTER YOUR GENDER :";
cin>>gen;
int age;
cout<<"Enter your age :";
cin>>age;
char hi,ih;
//Since the use of if and else statements was not allowed, several restrictions are missing in the code.
//age<0?cout<<"You have entered an invalid age\n":cout<<' ';
(gen=='F' || gen=='f')?cout<<"DO YOU HAVE HEALTH ISSUES(Y/N) :":cout<<' ';
(gen=='F' || gen=='f'?cin>>hi:cin>>ih);

(hi=='y' || hi== 'Y')&&(gen=='f' || gen=='F')?cout<<"Sorry, these rides are not safe for you .\n":cout<<' ';
(hi=='n' || hi=='N')&&(gen=='f' || gen=='F')?cout<<"YOU CAN ENJOY THE RIDES \n":cout<<' ';
(hi!='y' || hi!='Y')||(hi!='N' || hi!='n')?cout<<' ':cout<<"You have entered an invalid character for health issues";

(gen=='M' || gen=='m')&& age>=25?cout<<"YOU CAN ENJOY THE RIDES \n":cout<<' ';
(gen=='M' || gen=='m')&& age<25?cout<<"Sorry, these rides are not safe for you .":cout<<' ';

}
