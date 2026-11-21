#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    
    srand(time(nullptr));

    
    int rows = 5;
    
     int columns = 5;
    
    int array[rows][columns];

    
    for (int i = 0; i < rows; ++i) 
    {
        
        for (int j = 0; j < columns; ++j) 
        {
            
            array[i][j] = rand() % 100 + 1;
            
        }
        
    }

    
    cout << "Elements of Array in straight order :" << endl;
    
    for (int i = 0; i < rows; ++i)
    
     {
        
        for (int j = 0; j < columns; ++j)
         {
            
            cout << array[i][j] << " ";
            
        }
        
        cout << endl;
    }

 
    cout << "Elements of Array in reverse order :" << endl;
    
    for (int i = 4; i >= 0; --i) 
    {
    
        for (int j = 4; j >= 0; --j) 
        
        {
           
            cout << array[i][j] << " ";
            
        }
        
        cout << endl;
        
    }

    return 0;
    
}

