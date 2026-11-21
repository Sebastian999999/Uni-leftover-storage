#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Enter a character: "<<endl;
    
    cin >> ch;

    switch( (ch>='0'&&ch<='9')||(ch>=65&&ch<=90)||(ch>=97&&ch<=122) )
    {
    
    case 1:
	    switch(ch>='0'&&ch<='9')
		    {
		    case 0:
			     switch(ch>=65&&ch<=90)
			    {
			    case 0:
			            switch(ch>=97&&ch<=122)
				    {
				    case 1:
				    cout<<"Enter number is lower case letter";
				    break;
				    }
				    break;
			    case 1:
			    cout<<"Enter number is upper case letter";	    
			    break;
			    }
		    break;
		    
		    case 1:
		    cout<<"Enter number is a digit";
		    
		    }
  break;
   
	   
	    
case 0:
cout<<"invalid character\n";
break;
}

    return 0;
}

