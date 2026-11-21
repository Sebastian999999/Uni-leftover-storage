//iman suleman 23i0618
#include <iostream>
using namespace std;


int main()
{
	char c;
	cout<<"Enter Character = ";
	cin>>c;
	
	switch( c >= 'A' && c <= 'Z' )
	{
	 case 1:
	 	cout<<"its an uppercase alphabet \n";
	 	break;
	 case 0:
	 	switch( c >= 'a' && c <= 'z')
	 	{
	 	 case 1:
	 	 cout<<"its a lower case alphabet \n";
	 	 break;
	 	 
	 	 case 0:
	 	    switch(c >= '0' && c <= '9')
	 	    {
	 	     case 1:
	 	     cout<<"its a digit \n";
	 	     break;
	 	     
	 	     default:
	 	     cout<<"invalid input \n";
	 	     break;
		    }
		   break;
		}
		break;
		      
	}
	return 0;
}	
