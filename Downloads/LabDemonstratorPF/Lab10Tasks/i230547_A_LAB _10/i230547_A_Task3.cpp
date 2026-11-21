#include <iostream>

using namespace std;

int main(){

        int sum=0;
    
        int ROWS;
        
        cout<<"input number of rows: ";
        
        cin>>ROWS;
        
        int COLUMNS;
        
        cout<<"input number of columns : ";
        cin>>COLUMNS;
        
        int array[ROWS][COLUMNS];
        
        cout<<"Enter the elements of array : ";
        
        
        for(int i=0;i<ROWS;i++)
        
        {
        
        for(int j=0;j<COLUMNS;j++)
        
        {
        
        cin>>array[i][j];
        
        }
        
        }


         for (int i = 0; i < ROWS; ++i) {
    
         for (int j = 0; j < COLUMNS; ++j) {
        
         if (i % 2 != 0 && j % 2 != 0) { 
          
         sum = sum + array[i][j];
                
            }
            
        }
        
    }

          cout << "Sum is: " << sum << endl;

    return 0;
}

