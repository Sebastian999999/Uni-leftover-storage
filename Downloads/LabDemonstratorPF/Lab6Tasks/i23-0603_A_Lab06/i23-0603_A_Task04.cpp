#include <iostream>
using namespace std;
//Hassan Adeel
//23I-0603
	int main()
		{
			//Variables
			int	temp;
			bool b0,b1,b2,b3,b4,b5,b6;
			
			//Taking Input
			cout << "Enter Temperature: ";
			cin >> temp;
			
			//Conditions(b0 will be used to determine the validity)
			b0 = ((temp > 50) || (temp < -30));
			
			b1 = (temp >= 40);
			
			b2 = ((temp >= 30)&&(temp < 40));
			
			b3 = ((temp >= 20)&&(temp < 30));
			
			b4 = ((temp >= 10)&&(temp < 20));
			
			b5 = ((temp >= 0)&&(temp < 10));
			
			b6 = (temp < 0);
			
	switch(b0)
	{	
		case 1:
			cout << "Invalid Input\n";
				break;
		case 0:
			switch(b1)
			{
				case 1:
					cout << "Very Hot\n";
						break;
				case 0:
					switch(b2)
					{
						case 1:
							cout << "Hot\n";
								break;
						case 0:
							switch(b3)
							{
								case 1:
									cout << "Normal\n";
										break;
								case 0:
									switch(b4)
									{
										case 1:
											cout << "Cold\n";
												break;
										case 0:
											switch(b5)
											{
												case 1:
													cout << "Very cold\n";
														break;
												case 0:
													switch(b6)
													{
														case 1:
															cout << "Freezing\n";
																break;
													}
											}
									}
							}
					}						
			}
	}
			
			return 0;
		}			
