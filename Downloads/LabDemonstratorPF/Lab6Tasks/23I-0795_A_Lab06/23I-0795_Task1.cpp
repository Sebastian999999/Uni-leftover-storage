#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the operator (+,-,*,/) and . for Re-enter the first number"<<endl;
    cin>>op;
    cout<<"Enter the Second number "<<endl;
    cin>>num2; 
    
    switch(op)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
        case '/':
        switch(num2)
        {
        case 0:
        cout<<"Error:0 Can not be divided by any number"<<endl;
        break;
        default:
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;
            
        }
        break;
        case '.':
        cout<<"Enetr the First Number The privous number you entered has been deleted"<<endl;
        cin>>num1;
        break;
        
        default:
        cout<<"Enter a valid operator "<<endl;
        break;
        
    }
    
    return 0;
}

