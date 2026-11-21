// Abdullah Razzaq, 23i0057, LAB06, Q4 //

# include <iostream>
using namespace std;


int main ()
{
float temp;

cout << "enter the temperature of water in centigrade" << endl;
cin >> temp;

switch (temp > 100 || temp < -100)
{ 
case 1: cout << "invalid input" << endl; break;
case 0:
	 
switch (temp >= 40)
{	case 1: cout << "VERY HOT!!" << endl; break;
	case 0:
		switch (temp>=30 && temp <=40)
		{ 	  case 1: cout << "HOT!" << endl; break;
			  case 0: 
			  	switch (temp >= 20 && temp <= 30)
			  	{	case 1: cout << "Normal" << endl; break;
			  		case 0: 
			  			switch ( temp >= 10 && temp <=20)
			  			{	case 1: cout << "Cold" << endl; break;
			  				case 0: 
			  					switch (temp >=0 && temp <=10)
			  					{	case 1: cout << "Very cold!" << endl; break;
			  						case 0: cout << "Freezing!!" << endl; 
			  					}
			  			}			  
				}
		}
}

}

}
