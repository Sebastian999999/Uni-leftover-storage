#include <iostream>

using namespace std;

// Function prototype (declaration before main)
int divide(int, int = 2); // Default value for b is 2

int main()
 {
 int a,b;
 
 
cout<<"ENTER THE VALUE OF A PLEASE"<<endl;
cin>>a;
  

 
  
int result1 = divide(a);

cout<<"CALLING FUNCTION WITH JUST A"<<endl<<endl;
cout << "Result (a / b = a / 2): " << result1 << endl<<endl<<endl;

  
  cout<<"ENTER THE VALUE OF B PLEASE"<<endl;
  
  cin>>b;
  
  int result2 = divide(a, b);
  cout<<"CALLING FUNCTION WITH BOTH A AND B"<<endl;
  cout << "Result (a / b = ): " << result2 << endl;

  return 0;
}


int divide(int a, int b)

 {
  
  if (b == 0) 
  {
    cout << "Error: Division by zero!" << endl;
    return 1; 
  }
  return a / b;
}

