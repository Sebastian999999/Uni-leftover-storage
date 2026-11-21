#include<iostream>
using namespace std;

int main()
{
    	char gender;
    		int age;
    		char health;

    cout << "ENTER (F) for female and (M) for male" << endl;
    cin >> gender;

    cout << "ENTER AGE: " << endl;
    cin >> age;

    cout << "ENTER (Y) FOR YES AND (N) FOR NO TO SHOW YOUR HEALTH ISSUES: ";
    cin >> health;
   
    (gender == 'M') ? ((age <= 25) ? cout << "YOUR AGE IS: " << age << ". YOU CAN ENJOY THE RIDES." << endl :
                                     cout << "YOUR AGE IS: " << age << ". Sorry, these rides are not safe for you." << endl) :
                      ((gender == 'F') ? ((health == 'N') ? cout << "YOUR AGE IS: " << age << ". YOU CAN ENJOY THE RIDES." << endl :
                                                           cout << "YOUR AGE IS: " << age << ". Sorry, these rides are not safe for you." << endl) :
                                         cout << "Invalid gender input" << endl);

    return 0;
}

