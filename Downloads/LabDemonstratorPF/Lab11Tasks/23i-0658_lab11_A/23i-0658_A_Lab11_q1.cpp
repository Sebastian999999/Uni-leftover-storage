#include<iostream>
using namespace std;

// Function prototypes
int tripleCallByValue(int);
void tripleByReference(int&);


int main()
{
	int count = 5;
	
	cout << "Before calling tripleCallByValue: " << count << endl;
	count = tripleCallByValue(count); 
	cout << "After calling tripleCallByValue: " << count << endl << endl;

    // Reset count to initial value
    	count = 5; 

    	cout << "Before calling tripleByReference: " << count << endl;
    	tripleByReference(count); 
    	cout << "After calling tripleByReference: " << count << endl;

return 0;
}


// Function to triple the variable using call-by-value
	int tripleCallByValue(int count) 
		{
    		return count * 3;
		}

// Function to triple the variable using call-by-reference
	void tripleByReference(int &count) 
	{
    		count *= 3;
	}

