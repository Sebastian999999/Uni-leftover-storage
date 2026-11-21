#include <iostream>

using namespace std;

bool isPerfect(int num) 

{
  if (num <= 1) 
  
  {
    return false; 
  }
  int sum = 1;  
 			 for (int i = 2; i * i <= num; ++i) 
  { 
   				 if (num % i == 0) 
    {
    
      sum += i;
    					  if (i * i != num) 
      { 
        sum += num / i;
      }
    }
  }
  return sum == num;
}

int main()
 {
cout << "Perfect numbers between 1 and 1000:" << endl;
 			 for (int i = 2; i <= 1000; ++i)
   {
  				  if (isPerfect(i))
     {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}

