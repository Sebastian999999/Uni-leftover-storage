#include<iostream>
#include<climits>
using namespace std;
int main()
{
 float temperature;
 cout<<"Enter the temperature: "<<endl;
 cin>>temperature;
 
 int temp =static_cast<int>(temperature);
   switch (temp) 
   {
     case 40 ... INT_MAX:
     cout << "Very Hot"<<endl;
            break;
            
     case 30 ... 39:
     cout << "Hot"<<endl;
            break;
            
     case 20 ... 29:
     cout <<"Normal"<<endl;
            break;
     case 10 ... 19:
     cout <<"Cold"<<endl;
            break;
            
     case 0 ... 9:
     cout <<"Very Cold"<<endl;
            break;
    default:
    switch (temp)
     {
      case INT_MIN ... -1:
      cout << "Freezing" << endl;
            break;
      default:
      cout << "Invalid input or temperature is out of range." << endl;
      break;
            }
            break;
    }

    return 0;
}

