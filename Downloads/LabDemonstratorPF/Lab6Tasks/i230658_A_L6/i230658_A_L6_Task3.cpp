#include <iostream>
using namespace std;

int main() {
//Hamna Asif , 23i-0658 ;
    char gender, health;
    int age;

    cout << "Enter your gender (m/f): ";
    cin >> gender;
    cout << "Any health issues? (Y/N): ";
    cin >> health;
    cout << "Enter age: ";
    cin >> age;

(gender=='M'||gender=='m')?((age>=25)?cout<<"YOu can enjoy the rides":cout<<"Sorry, these rides are not safe for you"):((health=='Y'||health=='y')?cout<<"Sorry, these rides are not safe for you":cout<<"Yes you can enjoy the rides");
    cout << endl;
cout<<age;

    return 0;
}


