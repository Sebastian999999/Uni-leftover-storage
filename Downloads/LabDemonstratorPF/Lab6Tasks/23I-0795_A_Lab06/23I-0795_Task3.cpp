#include <iostream>
using namespace std;

int main() {
    char gender,health;
    int age;
    
    cout << "Enter gender (M/F): ";
    cin >> gender;
    
    cout << "Enter age: "<<endl;
    cin >> age;
    
    switch(gender){
    case 'M':
        (age > 25 ? cout << "You can enjoy the rides. Age: " << age << endl : cout << "Sorry, these rides are not safe for you. Age: " << age << endl) ;
        break;
        case 'F':
        cout<<"Do you have any Health issue (Y/N)"<<endl;
        cin>>health;
        switch(health)
        {
        case 'Y':
        cout<<"Sorry ride is not safe for you "<<endl;
        break;
        case 'N':
        (age > 25? cout<<"You can enjoy the rides. Age: "<<age<<endl: cout<<"Sorry ride is not safe for you. Age: "<<age<<endl);
        
        }
    break;
    default:
    cout<<"Invalid Gender "<<endl;
    break;
    }
    

    return 0;
}

