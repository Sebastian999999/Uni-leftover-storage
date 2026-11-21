#include<iostream>
using namespace std;
int main()
{
    int num1,num2;char var;
    cout<<"Menu\n";
    cout<<"--------------------------------------------------"<<endl;
    cout<<" +  --->  Addition\n";
    cout<<" -  --->  Subtraction\n";
    cout<<" *  --->  Multiplication\n";
    cout<<" /  --->  Division\n";
    cout<<" %  --->  Modulus\n";
    cout<<" .  --->  Cancel\n";
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"Enter the operation you want to perform: "<<endl;
    cin>>var;
    cout<<"--------------------------------------------------"<<endl;
    switch(var)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" = ";
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1<<" - "<<num2<<" = ";
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1<<" * "<<num2<<" = ";
        cout<<num1*num2;
        break;
        case '/':
        (num2==0)?cout<<"Invalid denominater\n":
        cout<<num1<<" / "<<num2<<" = "<<(float)num1/num2;
        break;
        case '%':
        cout<<num1<<" % "<<num2<<" = ";
        cout<<num1%num2;
        break;
        case '.':
        cout<<num1<<" . "<<num2<<" = ";
        break;
        default:
        cout<<"Inavlid input"<<endl;
    }
    cout<<endl;
    return 0;

}
