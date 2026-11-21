#include <iostream>
using namespace std;
int main()
{
	cout<<"    --------------------------------------         "<<endl;
	cout<<"        Inam ul Haq  23I-0839 CS-A        "<<endl;
	
int age;
char gender, h, b;

	cout<<"Enter your Gender: ";
	cin>>gender;
	
(gender == 'M' || gender == 'm')? cout<<"Enter your age: ": cout<<"Is there any health issue with you: " ;
	(gender == 'M' || gender== 'm')? cin>>age : cin>> h;
 
       			(age)? (age <=25)? cout<<endl<<"You can enjoy the rides\n": cout<<endl<<"Sorry, these rides are not safe for you.\n"  : 	(h == 'Y' || h == 'y')? cout<<endl<<"Sorry, these rides are not safe for you.\n": cout<<endl<<"You can enjoy the rides.\n "<<endl;
	
	
return 0;
}
 
