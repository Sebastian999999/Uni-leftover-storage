#include<iostream>

using namespace std;

int tripleCallByValue(int);

void tripleByReference(int&);

int main()
{


    int count;
    
    cout<<"Enter initial value of count: ";
    
    cin>>count;
    
    int newvalue1=tripleCallByValue(count);
    
    cout<<"value of count after tripleCallByValue function call: "<<count<<endl;
    
    cout<<"new value returned by tripleCallByValue function: "<<newvalue1<<endl;
    
    tripleByReference(count);
    
    
     cout<<"value of count after tripleCallByReference function call: "<<count<<endl;
    
    return 0;
    
    }
    
    int tripleCallByValue(int count){
    
    return count*3;
    
    }
    
    
    void tripleByReference(int&count)
    {
    
    count*=3;
    
    }

    
    
