#include<iostream>
using namespace std;

bool perfect(int number);

int main()
{
    cout<<"Perfect numbers between 1 and 1000:"<<endl;
    for(int i=1;i<=1000;i++)
	{
        if(perfect(i))
		{
            cout<<i<<endl;
        }
    }
    return 0;
}

bool perfect(int number)
{
    int sum=0;
    for(int i=1;i<number;i++)
	{
        if(number%i==0)
		{
            sum=sum+i;
        }
    }
    return sum == number;
}

