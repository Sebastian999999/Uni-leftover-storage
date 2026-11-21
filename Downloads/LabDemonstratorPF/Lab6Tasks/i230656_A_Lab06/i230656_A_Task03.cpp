// Imaad Fazal
// 23I-0656

#include <iostream>
using namespace std;

int main() {

    char gender;
    int age;
    char healthIssues;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    (gender == 'M') ? (age < 25 ? cout << "You can enjoy the rides\n" : cout << "Sorry, these rides are not safe for you\n")
                   : (gender == 'F' ? (cout << "Do you have health issues? (Y/N): ", cin >> healthIssues, healthIssues == 'Y' ? cout << "Sorry, these rides are not safe for you\n" : cout << "You can enjoy the rides\n")
                                   : cout << "Invalid input\n");

    cout << "Age: " << age << endl;

    return 0;
}
