#include <iostream>
using namespace std;

int main() {
int x, y;
cout << "Enter number 1: ";
cin >> x;
cout << "Enter number 2: ";
cin >> y;
char operand;
cout << "Enter operand";
cin >> operand;
int result;
switch (operand) {
case '+':
result = x + y;
break;
case '-':
result = x - y;
break;
case '*':
result = x * y;
break;
case '/':
if (y == 0) {
cout << "Division by 0 not possible\n";
return 0;
} else {
result = x / y;
break;
}
case '%':
if (y == 0) {
cout << "Modulus by 0 not possible\n";
return 0;
} else {
result = x % y;
break;
}
default:
cout << "Arithmetic operation canceled\n";
return 0;
}
cout << "Result: " << result << endl;
return 0;
}

