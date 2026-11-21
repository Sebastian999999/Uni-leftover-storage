#include <iostream>
using namespace std;
int main() 
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int x=(int)ch;
    switch(x>=0 && x<=127)
    {
    case 1:
    switch(x>=65 && x<=90)
    {
    case 1:
    cout<<"It is a UpperCase Alphabet."<<endl;
    break;
    }
    switch(x>=97 && x<=122)
    {
    case 1:
    cout<<"It is a LowerCase Alphabet."<<endl;
    break;
    }
    switch(x>=48 && x<=57)
    {
    case 1:
    cout<<"It is a Digit."<<endl;
    break;
    }
    switch((x>=0 && x<=47)||(x>=58 && x<=64)||(x>=91 && x<=96)||(x>=123 && x<=127))
    {
    case 1:
    cout<<"Invalid Input!!!"<<endl;
    break;
    }
    break;
    default:
    cout<<"Invalid Input!!!"<<endl;
    }
    return 0;
}

