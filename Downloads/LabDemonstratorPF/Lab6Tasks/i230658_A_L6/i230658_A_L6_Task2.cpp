#include <iostream>

using namespace std;

int main() {
	//Hamna Asif , 23i-0658 ;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

 
       switch(ch>='A'&&ch<='Z')
       {case 1:
       		cout<<"It is an Upper case Alphabet"<<endl;
       			break;
       case 0:
       	{
       		switch(ch>='a'&&ch<='z')
       		{
       		
       		case 1:
       			cout<<"It is a lower case alphabet"<<endl;
			break;
       		 case 0:
       			
      			    switch(ch>='0'&&ch<='9')
      			    {case 1:
      			    cout<<"It is a Digit"<<endl;
      			    break;
      			    
      			    default:		
       			    cout<<"Invalid input"<<endl;
       			    break;
       			}
       			
       				break;
       		
       		}
       break;
       	
       	}
       	}

    return 0;
}

