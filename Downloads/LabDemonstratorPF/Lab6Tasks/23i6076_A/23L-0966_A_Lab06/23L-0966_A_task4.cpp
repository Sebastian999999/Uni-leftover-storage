#include<iostream>
using namespace std;
int main()
{

	double t; 
	cout<<"Enter the temprature in centigrade:";
	cin>>t;
	switch ((t>100) || (t<-100))
	{
	case 1:
	cout<<"Enter the  valid temprature in centigrade:";
	cin>>t;
	switch (t>=0)
	{
	case 1:
	   switch (t>=0&&t<10)
	   {
	   case 1:
	   cout<<"Very Cold"<<endl;
	   break;
	   }
	   switch (t>=10&&t<20)
	   {
	   case 1:
	   cout<<" Cold"<<endl;
	   break;
	   }
	   switch (t>=20&&t<30)
	   {
	   case 1:
	   cout<<"Normal"<<endl;
	   break;
	   }
	   switch (t>=30&&t<40)
	   {
	   case 1:
	   cout<<"Hot"<<endl;
	   break;
	   }
		switch (t>=40)
	   {
	   case 1:
	   cout<<"Very Hot"<<endl;
	   break;
	   }
	   break;
	   case 0:
	   cout<<"Freezing"<<endl;
	   break;
	}
	break;
	case 0:
	switch (t>=0)
	{
	case 1:
	   switch (t>=0&&t<10)
	   {
	   case 1:
	   cout<<"Very Cold"<<endl;
	   break;
	   }
	   switch (t>=10&&t<20)
	   {
	   case 1:
	   cout<<" Cold"<<endl;
	   break;
	   }
	   switch (t>=20&&t<30)
	   {
	   case 1:
	   cout<<"Normal"<<endl;
	   break;
	   }
	   switch (t>=30&&t<40)
	   {
	   case 1:
	   cout<<"Hot"<<endl;
	   break;
	   }
		switch (t>=40)
	   {
	   case 1:
	   cout<<"Very Hot"<<endl;
	   break;
	   }
	   break;
	   case 0:
	   cout<<"Freezing"<<endl;
	   break;
	}
	
	}
	
	return 0;
}
