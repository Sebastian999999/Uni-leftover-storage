#include <iostream>
#include <iostream>

using namespace std;

int main() {
    char gender, healthIssues;
    int age;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Age: " << age << endl;

    (gender == 'M' || gender== 'm') ?
        (age <= 25 ? cout << "You can enjoy the rides." << endl : cout << "Sorry, these rides are not safe for you." << endl) :
    (gender == 'F' || gender=='f' && ((cout << "Do you have health issues (Y/N)? " && cin >> healthIssues) && healthIssues == 'N'|| healthIssues=='n') ? cout << "You can enjoy the rides." << endl : cout << "Sorry, these rides are not safe for you." << endl);

    return 0;
}
