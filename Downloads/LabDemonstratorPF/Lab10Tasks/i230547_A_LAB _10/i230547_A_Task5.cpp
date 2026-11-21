#include<iostream>

using namespace std;

int main()
{ 

        int m;
        cout<<"input number of rows: ";
        
        cin>>m;
        
        int n;
        
        cout<<"input number of columns : ";
        cin>>n;
        
        
        int array1[m][n];
        
        cout<<"input the elements of array1 :"<<endl;
        
        for(int i=0;i<m;++i)
        
        {
        
  
        for(int j=0;j<n;++j)
        
        {
  
       cin>>array1[i][j];
  
       }
  
       }
       
       int transpose[m][n];
       
       for(int i=0;i<n;++i)
        
        {
        
  
        for(int j=0;j<m;++j)
        
        {
  
        transpose[i][j]= array1[j][i];
  
       }
  
       }
       
       cout<<"original array : "<<endl;
       
         for(int i=0;i<m;++i)
        
        {
        
  
        for(int j=0;j<n;++j)
        
        {
  
        cout<<array1[i][j]<<" ";
        
        }
        
        cout<<endl;
        }
        
        
        cout<<"transpose of array1 :"<<endl;
        
          for(int i=0;i<n;++i)
        
        {
        
  
        for(int j=0;j<m;++j)
        
        {
  
        cout<<transpose[i][j]<<" ";
        
        }
        
        cout<<endl;
        }
        
        return 0; 
        }
        
       
