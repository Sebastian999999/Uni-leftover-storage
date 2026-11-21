/* Name: Madiha Shahzad
Roll Number: i23-0784
Section: A
Lab06
Task 3 */

#include <iostream>
using namespace std;
int main() 
{   
    //Variable Declarations
    char gender, health = 'N';
    int age;

    //Prompts the user to input gender
    cout<<"Enter your gender: (M/F)? ";
    cin>>gender;
    
    //Prompts the user to input age
    cout<<"Enter your age: ";
    cin>>age;

    //Ternary Operator
    (gender == 'M') ? ((age < 25) ? (cout << "You can enjoy the rides. Your age is " << age) : (cout << "Sorry, these rides are not safe for you. Your age is " << age)): (cout << "Do you have any health issues? (Y/N): ", cin >> health, (health == 'N' ? (cout << "You can enjoy the rides. Your age is " << age) : (cout << "Sorry, these rides are not safe for you. Your age is " << age)));

    return 0;
}
