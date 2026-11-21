// Abdullah Razzaq, 23i0057, LAB06, Q3 //

# include <iostream>
using namespace std;

int main ()
{ 
int age, gender, health;
char g,h;

cout << "Welcome to Joyland, we're gonna need some info from you to assess wether\nor not you can enjoy the extreme rides." << endl;
cout << "Please specify your gender\nPress M: Male\nPress F: Female" << endl;
cin >> g;
cout << "Please specify your age as well." << endl;
cin >> age;

g == 'm' || g == 'M' ? age <=25 ? cout << "your age (" << age << ") is below 25, press n to proceed" << endl : cout << "your age (" << age << ") is above 25, press y to proceed" << endl:  cout << "Please specify wether you have any health issues, press Y if you do, N if you don't" << endl;

cin >> h;

h == 'Y' || h == 'y' ? cout << "Sorry, these rides are not safe for you" << endl : cout << "You can enjoy the extreme rides. " << endl;

return 0;
}
