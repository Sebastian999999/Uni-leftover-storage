// Imaad Fazal
// 23I-0656

#include <iostream>
using namespace std;

int main() {
    double n1, n2, result;
    char op;

    
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    
    cout << "Enter the desired operation (+, -, *, /, %): ";
    cin >> op;

    
    switch(op) {
    
        case '+':
            result = n1 + n2;
            cout << "Result is: " << result << endl;
            break;
            
        case '-':
            result = n1 - n2;
            cout << "Result is: " << result << endl;
            break;
            
        case '*':
            result = n1 * n2;
            cout << "Result is: " << result << endl;
            break;
            
       
            case '/':
            
            switch (n2 == 0) {
                case 0:
                    result = n1 / n2;
                    cout << "Result is: " << result << endl;
                    break;
                default:
                    cout << "Error: You cannot divide by 0!" << endl;
            }
            break;
            
        case '%':
        
            switch (n2 == 0) {
                case 0:
                    result = (int)n1 % (int)n2;
                    cout << "Result is: " << result << endl;
                    break;
                default:
                    cout << "Error: You cannot divide by 0!" << endl;
            }
            break;
            
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

