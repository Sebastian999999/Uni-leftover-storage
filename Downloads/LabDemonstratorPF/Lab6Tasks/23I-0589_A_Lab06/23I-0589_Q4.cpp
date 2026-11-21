//Aaiz Ur Rehman Kazmi 23I-0589
#include<iostream>
using namespace std;
int main()
{
	
	int temp;
	cout<<"Enter the Temperature: ";
	cin>>temp;
	;
	switch (temp > 100 || temp <-100)
	{
	
		case true :
		cout << "Invalid temprature ";
		break;
		case false :
		switch(temp >= 40 )
		{
			case 1:
				cout<<"Very Hot ";
				break; 
				case 0 :
				switch(temp >= 30 )
				{
					case 1:
						cout<<" Hot ";
						break; 
						case 0 :
						switch(temp >= 20 )
						{
							case 1:
								cout<<"Normal ";
								break; 
								case 0 :
								switch(temp >= 10 )
								{
									case 1:
										cout<<"Cold  ";
										break; 
										case 0 :
										switch(temp >= 0 )
										{
											case 1:
												cout<<"Very Cold ";
												break; 
												case 0 :
												cout << "Freezing ";
												
											






										}
									






								}
							






						}
					






				}
				
			






		}		
	}
	cout << endl ; 
	
	return 0;	
}
