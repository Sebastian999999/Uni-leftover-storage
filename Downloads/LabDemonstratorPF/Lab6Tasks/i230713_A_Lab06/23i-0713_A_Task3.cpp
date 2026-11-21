#include<iostream>
using namespace std;

int main() {
cout<<"Hannan Abid         23i-0713               LAB06"<<endl<<endl;
    int age;
    char gender, health;
    cout << "Enter Age" << endl;
    cin >> age;
    cout << "Enter Gender( M or F )" << endl;
    cin >> gender;

    (gender == 'M' || gender == 'm') ? (age >= 25? cout<< "You can Enjoy Rides"<<endl<<age<<endl : cout<<"Sorry,These Rides are not safe"<<endl<<age<<endl) :
     (gender == 'F' || gender == 'f') ? (cout<<"Do you have health issues (Y or N)" <<endl,cin>>health,
            (health == 'N' || health == 'n') ?cout<<"You can enjoy the rides"<<endl<<age<<endl : cout<<"Sorry,these rides are not safe"<<endl<<age<<endl):cout<<"Invalid Input"<<endl;

    return 0;
}

