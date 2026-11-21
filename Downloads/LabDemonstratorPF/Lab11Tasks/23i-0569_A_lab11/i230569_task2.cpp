#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int cointoss() {
  
  static bool seeded = false;
  			if (!seeded) 
  			
  			{
    srand(time(0));
    seeded = true;
  }

  // Generatinggg a random number between 0 and 1
  int a = rand() % 2;

  return a;
}

int main()
 {
  int heads = 0;
  int tails = 0;

  		for (int i = 0; i < 100; ++i) 
  {
    int result = cointoss();

    			if (result == 0) 
    {
      heads++;
      cout << "Heads" << endl;
    } 
    				else 
    {
      tails++;
      cout << "Tails" << endl;
    }
  }

  cout << "AFTER COIN TOSSING 100 TIMES" << endl;
  cout << "IT WAS HEADS " << heads << " TIMES" << endl;
  cout << "IT WAS TAILS " << tails << " TIMES" << endl;

  return 0;
}

