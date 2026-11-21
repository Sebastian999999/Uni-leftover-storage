#include <iostream>
using namespace std;

int main() {
    char gender, health;
    int age;
    
    cout << "Enter gender (M/F): ";
    cin >> gender;
    
    cout << "Enter age: ";
    cin >> age;
    
    (gender == 'M') ? (age < 25 ? cout << "You can enjoy the rides\n" : cout << "Sorry, these rides are not safe for you\n") :
                      (cout << "Do you have health issues? (Y/N): ", cin >> health, (health == 'Y' ? cout << "Sorry, these rides are not safe for you\n" : cout << "You can enjoy the rides\n"));
    
    cout << "Age: " << age << endl;
    
    return 0;
}

