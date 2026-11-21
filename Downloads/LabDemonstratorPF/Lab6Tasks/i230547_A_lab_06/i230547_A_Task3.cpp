#include <iostream>

using namespace std;

int main() {
    char gender;
    int age;
    char health;
    cout<<"have you any health issues? enter Y for yes and N for no"<<endl;
    
    cin>>health;
    
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Age: " << age << endl;

    (gender == 'M' || gender == 'm') ?
        ((age >25) ? (cout << "You can enjoy the rides." ):( cout << "Sorry, these rides are not safe for you.")) :
       
      (gender == 'F' || gender == 'f') ?
            
            ((health=='N') ? (cout << "You can enjoy the rides." ):( cout << "Sorry, these rides are not safe for you.")) :
            cout << "Invalid gender input.";

    return 0;
}

