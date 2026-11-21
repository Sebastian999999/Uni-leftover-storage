//Aaiz Ur Rehman Kazmi 23I-0589
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter The age: ";
	cin>>age;
	char ch;
	cout<<"Enter The Gender M for male and F for female: ";
	cin>>ch;
	char issues;
	cout<<"Enter IF you have issues: ";
	cin>>issues;
	(ch=='M'||ch=='m')?(age<25)?cout<<"You can enjoy the rides"<<endl:cout<<"Sorry, these rides are not safe for you"<<endl:(ch=='F'||ch=='f')?((issues=='Y')||(issues='y'))?cout<<"Sorry, these rides are not safe for you"<<endl:cout<<"You can enjoy the rides"<<endl:cout<<"Invalid Input"<<endl;
	//cout<<line<<endl;
	cout<<"Age:"<<age<<endl;
	return 0;
}

