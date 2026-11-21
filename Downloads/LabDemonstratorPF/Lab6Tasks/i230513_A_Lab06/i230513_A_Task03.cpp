// Hafiz Muhammad Faseeh Ud Din
	// Cs-A
	// 23I-0513


#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;
    char healthIssues;

    // Input gender
    cout << "Enter gender (M/F): ";
    cin >> gender;

    // Input age
    cout << "Enter age: ";
    cin >> age;

    // Check eligibility based on gender and age
    (gender == 'M') ?
    ((age < 25) ? cout << "You can enjoy the rides. Age: " << age << endl :
                  cout << "Sorry, these rides are not safe for you. Age: " << age << endl) :
    ((gender == 'F') ?
        (cout << "Do you have health issues? (Y/N): ", cin >> healthIssues,
        (healthIssues == 'Y') ? cout << "Sorry, these rides are not safe for you. Age: " << age << endl :
                                cout << "You can enjoy the rides. Age: " << age << endl) :
        cout << "Invalid gender." << endl);

    return 0;
}

