#include <iostream>
using namespace std;
int main()
{
char ch[20];
int vow[5]={0,0,0,0,0};	//VOWEL count array 
int clow=0, chi=0;	//upper and lower case count
cout<<"Enter a sentence of size 20"<<endl;
cin.get(ch,20);
cin.ignore();

	for(int i=0; i<20; i++)
	{
		if(ch[i]>=65&&ch[i]<=90)
		{
		chi++;
		}
		if(ch[i]>=97&&ch[i]<=122)
		{
		clow++;
		}
	}
	
	for(int i=0; i<20; i++)
	{
		if(ch[i]==65||ch[i]==97)
		{
		vow[1-1]++;
		}
		if(ch[i]==101||ch[i]==69)
		{
		vow[2-1]++;
		}
		if(ch[i]==105||ch[i]==73)
		{
		vow[3-1]++;
		}
		if(ch[i]==111||ch[i]==79)
		{
		vow[4-1]++;
		}
		if(ch[i]==117||ch[i]==85)
		{
		vow[5-1]++;
		}
	}
	
	for(int i=0; i<20; i++)
	{
		if(ch[i]==' ')
		{
			if(ch[i+1]>=97&&ch[i+1]<=122)
			{
				ch[i+1]=ch[i+1]-32;
			}
		}
		
		if(ch[0]>=97&&ch[0]<=122)
			{
			ch[0]=ch[0]-32;
			}
	}
cout<<"The frequency of lowercase alphabets is: "<<clow<<endl;
cout<<"The frequency of uppercase alphabets is: "<<chi<<endl;
cout<<"The frequency of vowel e is: "<<vow[2-1]<<endl;
cout<<"The frequency of vowel a is: "<<vow[1-1]<<endl;
cout<<"The frequency of vowel i is: "<<vow[3-1]<<endl;
cout<<"The frequency of vowel o is: "<<vow[4-1]<<endl;
cout<<"The frequency of vowel u is: "<<vow[5-1]<<endl;
cout<<"The capitalised string is"<<endl;
	
	for(int i=0;ch[i]!='\0'; i++)
	{
	cout<<ch[i];
	}

return 0;
}
