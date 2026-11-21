#include <iostream>

using namespace std;

int main() {
    char gender;
    int age;
    char healthIssues;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    (gender == 'M') ? ((cout << "Enter age: " && cin >> age && (age < 25)) ? cout << "You can enjoy the rides. Your age is: " << age << endl : cout << "Sorry, these rides are not safe for you. Your age is: " << age << endl) : ((gender == 'F') ? ((cout << "Do you have any health issues? (Y/N): " && cin >> healthIssues && (healthIssues == 'N')) ? cout << "You can enjoy the rides. Your age is: " << age << endl : cout << "Sorry, these rides are not safe for you. Your age is: " << age << endl) : (cout << "Invalid gender entered." << endl));

    return 0;
}
