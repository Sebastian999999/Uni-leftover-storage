// Imaad Fazal
// 23I-0656

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int chInt = static_cast<int>(ch);
    
    switch(chInt >=48 && chInt <= 57) {
        case 1:
            cout << "It's a digit." << endl;
            break;
}

    switch(chInt >= 65 && chInt <= 90) {
        case 1:
            cout << "It's an alphabet." << endl;
            break;
}

    switch(chInt >= 97 && chInt <= 122) {
       case 1:
          cout<<"It's an alphabet." << endl;
          break;
}
   switch(chInt >= 32 && chInt <= 47) {
        case 1:
          cout<<"Invalid Input." << endl;
          break;
      }
      
   switch(chInt >= 58 && chInt <= 64) {
        case 1:
          cout<<"Invalid Input." << endl;
          break;
}
    
   switch(chInt >= 91 && chInt <= 96) {
        case 1:
          cout<<"Invalid Input." << endl;
          break;
}
    
   switch(chInt >= 123 && chInt <= 127) {
        case 1:
        cout<<"Invalid Input." << endl;
        break;
}
       
    return 0;

}
