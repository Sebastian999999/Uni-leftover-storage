#include<iostream>
using namespace std;
int main()
{
    char var;
    cout<<"Enter the character"<<endl;
    cin>>var;
    switch(var>='A' && var<='z')
    {
        case 1:
        cout<<"THe character is the alphabet"<<endl;
        break;
        case 0:
        switch(var>=48 && var<=57){
            case 1:
            cout<<"THe character is the number"<<endl;
            break;
            case 0:
            cout<<"Invalid input"<<endl;
            break;
        }

        
    }
    return 0;
}