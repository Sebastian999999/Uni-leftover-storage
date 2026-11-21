#include <iostream>
using namespace std;
int main() {
char userInput;
cout << "Enter a character: ";
cin >>userInput;
int ASCII=int(userInput);
switch((ASCII>64&&ASCII<91)){
case 1:
cout<<"Its an uppercase alphabet" << endl;
break;
}
switch ((ASCII>96&&ASCII<123))
{
case 1:
cout << "Its a lowercase alphabet" << endl;
break;
}
switch ((ASCII>47&&ASCII<58))
{
case 1:
cout<<"Its a number" << endl;
break;
}
switch ((ASCII<48||ASCII>123))
{
case 1:
cout << "Invalid Input" << endl;
break;
}
return 0;
}

