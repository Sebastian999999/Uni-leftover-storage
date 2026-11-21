#include <iostream>

using namespace std;

int main() {
    char character; 
    cout << "Enter the character: ";
    cin >> character; 

    switch (character) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cout << "It is a digit" << endl;
            break;
            
        default:

if ((character >= 'a' && character <= 'z') || (character >='a' & character <= 'z')) 
	{
	cout<<"It is a alphabet"<<endl;
	}
else {
 cout<<"Invalid Input"<<endl;
	}
}

    return 0;
}
