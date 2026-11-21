// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #6

#include <iostream>
using namespace std;

int main()
{
  float temperature;

  // Input temperature in centigrade
  cout << "Enter temperature in centigrade: ";
  cin >> temperature;

  // check for very hot and freezing and very cold seperately
  bool veryHot = temperature >= 40 && temperature <= 100;
  bool veryCold = temperature >= 0 && temperature < 10;
  bool freezing = temperature < 0 && temperature >= -100;
  bool validation = temperature > 100 || temperature < -100;

  // divide by 10 to get ranges
  int division = temperature / 10;

  switch (veryHot)
  {
  case true:
    cout << "Very hot" << endl;
    break;
  default:
    switch (division)
    {
    case 3:
      cout << "Hot" << endl;
      break;
    case 2:
      cout << "Normal" << endl;
      break;
    case 1:
      cout << "Cold" << endl;
      break;
    default:
      switch (veryCold)
      {
      case true:
        cout << "Very Cold" << endl;
        break;
      default:
        switch (freezing)
        {
        case true:
          cout << "Freezing" << endl;
          break;
        default:
          switch (validation)
          {
          case true:
            cout << "Invalid input" << endl;
            break;
          }
        }
      }
    }
  }

  return 0;
}