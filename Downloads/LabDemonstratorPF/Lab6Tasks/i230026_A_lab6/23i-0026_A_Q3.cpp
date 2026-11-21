#include <iostream>
#include <string>

using namespace std;

int main() {
    char gender;
    int age;
    string healthIssues;

    cout << "Enter your gender (M/F): ";
    cin >> gender;
    cout << "Enter your age: ";
    cin >> age;

    // If the person is male
    if (gender == 'M' || gender == 'm') {
        // Check if age is below 25 using ternary operator
        (age < 25) ? cout << "You can enjoy the rides. Your age is: " << age << endl
                   : cout << "Sorry, these rides are not safe for you. Your age is: " << age << endl;
    }
    // If the person is female
    else if (gender == 'F' || gender == 'f') {
        // Ask if she has health issues
        cout << "Do you have health issues? (Y/N): ";
        cin >> healthIssues;
        
        // Check if she has health issues using ternary operator
        (healthIssues == "N" || healthIssues == "n") ? cout << "You can enjoy the rides. Your age is: " << age << endl
                                                     : cout << "Sorry, these rides are not safe for you. Your age is: " << age << endl;
    }
    // If invalid gender input
    else {
        cout << "Invalid input! Please enter M for male or F for female." << endl;
    }

    return 0;
}

