//Hafiz Ahmad
//23i-0714
#include <iostream>
using namespace std;
int main()
{
	char gender, health_issues;
	int age;
	cout << "Enter your gender (M/F): ";
	cin >> gender;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Do you have health issues? (Y/N): ";
	cin >> health_issues;
	((gender == 'M') ? ((age < 25) ? cout << "Your age is "  << age << " and you can enjoy the rides\n" : cout << "Your age is " << age << "but sorry, these rides are not safe for you\n") : ((health_issues == 'N') ? cout << "Your age is " << age << " and you can enjoy the rides\n" : cout << "Your age is " << age << " but sorry, these rides are not safe for you\n"));
	/*((gender =='F') ? cout << "Do you have any health issues? (Y/N) : " : ((age < 25) ? cout << "Your age is "  << age << " and you can enjoy the rides\n" : cout << "Your age is " << age << " but sorry, these rides are not safe for you\n")) ;
	if (gender =='F') {
		cin >> health_issues;
		((health_issues == 'N') ? cout << "Your age is " << age << " and you can enjoy the rides\n" : cout << "Your age is " << age << " but sorry, these rides are not safe for you\n");
	}*/
	return 0;
}
	
