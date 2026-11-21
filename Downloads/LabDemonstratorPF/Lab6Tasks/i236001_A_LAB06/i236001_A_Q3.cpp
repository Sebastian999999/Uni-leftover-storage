//Name:Irtaza Kazmi Roll No.:23i-6001
#include<iostream>
using namespace std;

int main()
{
    int age;
    char gender, health;
    
    cout<<"Tell Your Gender : ";
    cin>>gender;
    (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') ? cout << "Invalid Input" << endl << "Please press ctrl + c to exit ": (cout << "Enter Your Age : ");
            cin>>age;
            (gender == 'M' || gender == 'm') ? (age < 25) ? cout << "Output For Male Gender: You Can Enjoy The Rides and your age is "<<age << endl <<"Please press ctrl +c to exit ": cout << "Output For Male Gender: Sorry, the rides are not safe for you and your age is "<<age << endl<<"Please press ctrl +c to exit": cout<< "Any Health Issue? (Y/N): "<<endl; 	
            	cin>>health;
             (gender =='F'|| gender == 'f') && (health == 'N' || health == 'n') ? cout<< "Output For Female Gender: You Can Enjoy The Rides and your age is "<<age <<endl: cout<< "Output For Female Gender: Sorry, the rides are not safe for you and your age is "<<age<<endl;           
    cout << endl;
    return 0;
}



