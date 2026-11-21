#include<iostream>
using namespace std;
int main()
{
	char ch,ch1;
	int age;
	cout<<"Enter your Gender\nMale(M)\nFemale(F)"<<endl;
	cin>>ch;
	cout<<"Enter your age:";
	cin>>age;
	switch (ch)
	{
	  case 'M':
	  cout<<"checking age..";
	  (age>=25)?(cout<<"you can enjoy rides\n you are:"<<age<<"years old\n"):(cout<<"you cannot enjoy the rides\n you are:"<<age<<"years old\n");
	  break;
	    case 'F':
	    cout<<"Do you have health issues:\nYes(y)\nNo(n)";
	    cin>>ch1;
	    (ch1=='y')?(cout<<"You can enjoy the rides\nyour age is:"<<age<<"years old\n"):(cout<<"You cannot enjoy the rides\nyour age is:"<<age<<"years old\n");
	    break;
	}
	return 0;
	
}
