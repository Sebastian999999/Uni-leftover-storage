//Muhammad Ali   23I-2565

#include<iostream>

using namespace std;

int main() {

	int age;
	char gender, choice;
	cout << "Enter Age: ";
	cin >> age;
	cout << "\nEnter Gender(M for Male, F for Female): ";
	cin >> gender;
	cout << "\nDo you have health issues?(Y for Yes,N for No): ";
	cin >> choice;
	
	
	(gender == 'M' || gender == 'm') ? 
	((age < 25)? cout << "\nAge: " << age << "\nYou can enjoy the rides\n" :  
	cout << "\nAge: " << age << "\nSorry, these rides are not for you"):
	cout<<"";
	
	(gender == 'F' || gender == 'f')?
	
	(choice == 'N' || choice == 'n')? 
	cout << "\nAge: " << age << "\nYou can enjoy the rides":  
	cout << "\nAge: " << age << "\nSorry, these rides are not for you\n":cout<<"";


return 0;
}
