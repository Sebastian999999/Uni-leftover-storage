#include<iostream>
using namespace std;

int main() {
    int age;
    char gender, healthIssues;

    cout << "Enter your gender (M for male, F for female): ";
    cin >> gender;
    cout << "Enter your age: ";
    cin >> age;

    (gender == 'F'||gender == 'f') ? (
        cout << "Do you have health issues (Y for yes, N for no): ",
        cin >> healthIssues,
        (healthIssues == 'Y'||healthIssues == 'y') ?
            cout << "Sorry, these rides are not safe for you.\n Your age is: " << age << endl :
            cout << "You can enjoy the rides.\n Your age is: " << age << endl
    ) : (
        
        ((gender == 'M'||gender == 'm') && age <= 25) ?
            (cout << "You can enjoy the rides." << endl,
            cout << "Your age is: " << age << ". "):
            (cout << "Sorry, these rides are not safe for you." << endl,cout << "Your age is: " << age << ". ")
    );

    return 0;
}