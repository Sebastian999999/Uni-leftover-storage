#include <iostream>
using namespace std;
//Hassan Adeel
//23I-0603
int main() {
	
	//Variables
    char gender,cond;
    int age;
	
	//Taking Input
	
    cout << "Enter your gender: ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;
    
    //Displaying the age
    
    cout << "Age: " << age << endl;
	
	//Conditions
	
    cout << (gender == 'M' ? (age > 25 ? "You can enjoy the rides\n" : "Sorry, these rides are not safe for you\n") : (gender == 'F' ? "Any health issues? (Y/N): " : "Invalid input."));

    cond = (gender == 'F' ? (cin >> cond, cond):0);
    cout << (cond == 'Y' ? "Sorry, these rides are not safe for you\n" : "You can enjoy the rides\n");
    

    return 0;
}
			
					
		
			
			
