//iman suleman 23i0618
#include <iostream>
using namespace std;


int main()
{
	int age;
	char gender,choice;
	
	cout<<"Enter your gender (M for male, F for female) : ";
	cin>>gender;
	
	cout<<"Enter your age :";
	cin>>age;
	
	cout<<"Do you have health issues (Y/N) :";
	cin>>choice;
	
	
	(gender == 'M' || gender == 'm')? ( (age > 25)? cout<<"You can enjoy the rides.\n" : cout<<"Sorry these rides are not safe for you.\n" ) : ( ( choice == 'Y' || choice == 'y')? cout<<"Sorry, these rides are not safe for you.\n": cout<<"You can enjoy the rides.\n" ) ;
	cout<<"Your age is "<<age<<endl;
	
	 
	
	return 0;
}
