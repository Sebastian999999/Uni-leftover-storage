#include <iostream>
using namespace std;
int main()
{
float temp;
cout<<"Enter the temperature"<<endl;
cin>>temp;

	switch(temp>=40)
	{
	case 1:
	{cout<<"Very Hot"; return 0;}
	case 0:
		switch (temp>=30&&temp<40)
		{
			case 1:{ cout<<"Hot"; return 0;}
			case 0:
			{
			switch (temp>=20&&temp<30)
			{
				case 1:{ cout<<"normal"; return 0;}
				case 0:
					{
					switch (temp>=10&&temp<20)
						{
						case 1:{ cout<<"Cold"; return 0;}
							case 0:	switch (temp>=00&&temp<10)
									{
									case 1: {cout<<"Very Cold"; return 0;}
										case 0:		switch (temp<0)
												{
												case 1: {cout<<"Freezing"; return 0;}
													case 0:cout<<"Invalid input";
												}
									}
			
						}
					}
			}
			}
			}
			}
	
return 0;
}
