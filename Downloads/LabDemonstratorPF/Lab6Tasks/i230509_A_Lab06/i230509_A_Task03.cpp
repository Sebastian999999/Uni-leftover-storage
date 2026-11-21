#include<iostream>
using namespace std;
int main() {
    int age;
    char gen, hi;
    cout << "Please enter age" << endl;
    cin >> age;
    cout << "Please enter your gender (M/F)" << endl;
    cin >> gen;

    age <= 0 ? cout << "The age can't be negative" << endl : 
    (gen == 'M' && age < 25) ? cout << "The rides are safe for you." << endl : 
    (age!=25 && age<25)?
    (gen == 'F' ? (cout << "The health issues or not (Y/N)" << endl, cin >> hi, hi) : 'N' ) == 'N'? cout << "You can enjoy the rides." << endl : 
    cout << "Sorry, the rides are not safe for you.\n":
    cout<<"Enter the age in the range of age>0 and the age<25\n";
    
    return 0;
}
