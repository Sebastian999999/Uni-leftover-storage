#include <iostream>
using namespace std;

int main() {
    int age;
    char gender, healthissues;

    cout << "Enter the gender (M for male / F for female): ";
    cin >> gender;

    cout << "Enter the age: ";
    cin >> age;
    
      cout << "Do you have health issues? (Y/N): ";
        cin >> healthissues;


    string malemessage = (gender == 'M' && age <= 25) ? "You can enjoy the rides" : "Sorry, these rides are not safe for you";

    cout << "Age: " << age << endl;
    cout << malemessage << endl;
    
        string femalemessage = (healthissues == 'Y') ? "Sorry, these rides are not safe for you" : "You can enjoy the rides";

        cout << "Age: " << age << endl;
        cout << femalemessage << endl;
    

    return 0;
}

