#include<iostream>
using namespace std;

int main() {
// Muhammad Arslan 23i-0572_A
char a1;
cout<<"Enter the digit or character:\n";
cin>>a1;
int n = static_cast<int>(a1);

bool a = n >= 65 && n <= 90;
bool b = n >= 48 && n <= 57;
bool c = n >= 97 && n <= 122;

switch (a) {
case true:
cout<<"The entered character is an uppercase alphabet." << endl;
break;
default:
switch (b) {
case true:
cout<<"The entered character is a digit." << endl;
break;
default:
 switch (c) {
case true:
 cout<<"The entered character is a lowercase alphabet." << endl;
break;
default:
cout<<"Invalid character entered!" << endl;
}
}
}

return 0;
}

