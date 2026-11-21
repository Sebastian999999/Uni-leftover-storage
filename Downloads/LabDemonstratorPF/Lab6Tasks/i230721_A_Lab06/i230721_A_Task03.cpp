#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;
    
    cout << "Enter the Gender (M for Male and F for Female): ";
    cin >> gender;
    
    cout << "Enter the age: ";
    cin >> age;
    
    (gender == 'M') ? ((age >= 25) ? cout << "You can enjoy the rides.\nAge: " << age << endl : cout << "Sorry, these rides are not safe for you.\nAge: " << age << endl) 
                    : ((age >= 25) ? cout << "You can enjoy the rides.\nAge: " << age << endl 
                    : (cout << "Do you have health issues? (Y/N): ", (cin >> gender) && gender == 'N' 
                    ? cout << "You can enjoy the rides.\nAge: " << age << endl 
                    : cout << "Sorry, these rides are not safe for you.\nAge: " << age << endl));
    return 0;
}

