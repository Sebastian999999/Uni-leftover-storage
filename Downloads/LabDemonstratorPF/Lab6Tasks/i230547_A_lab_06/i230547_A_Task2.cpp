#include<iostream>

using namespace std;

int main()
{

     char ch;
    
    cout<<"enter a digit or alphabet: "<<endl;
    cin>>ch;
    int num1=(int)ch;
   
    switch(num1>=65 && num1<=90)
    {
    case 1:
   
    cout<<"you entered a alphabet. "<<endl;
   
    }
    switch(num1>=97 && num1<=122)
    {
    case 1:
   
    cout<<"you entered a alphabet. "<<endl;
   
    }

    switch(num1>=48 && num1<=57)
    {
   
    case 1:
   
    cout<<"you entered a digit. "<<endl;
    
    }

    switch(num1<48 )
    {
    case 1:
   
    cout<<"invalid input. "<<endl;
    
    }

    switch(num1>122)
    {
    case 1:
   
    cout<<"invalid input. "<<endl;
    
    }
    
    
    switch(num1>90 &&  num1<97)
    {
    case 1:
   
    cout<<"invalid input. "<<endl;
    
    }
    
     switch(num1>57 && num1<65)
    {
    case 1:
   
    cout<<"invalid input. "<<endl;
     
    }
    
    
    
    return 0;
    
    }
    
    
    
    
    
    
    
