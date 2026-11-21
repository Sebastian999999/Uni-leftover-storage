#include<iostream>

using namespace std;

int main(){
    
    
        int m=3;
        
        int n=3;
        
        int matrix1[m][n];
        
        cout<<"input the elements of the matrix1 :"<<endl;
        
        for(int i=0;i<3;++i)
        
        {
        
  
        for(int j=0;j<3;++j)
        
       {
  
       cin>>matrix1[i][j];
  
      }
  
      }
         
         int matrix2[m][n];
        
        cout<<"input the elements of the matrix2 :" << endl;
        
        for(int i=0;i<3;++i)
        
        {
        
  
        for(int j=0;j<3;++j)
        
       {
  
       cin>>matrix2[i][j];
  
      }
  
      }
      
      int result[m][n]={0};
      
        for(int i=0;i<3;++i)
        
        {
        
  
        for(int j=0;j<3;++j)
        
       {
       
       result[i][j]=0;
       
       for(int k=0;k<3;++k)
       
       {
       
       result[i][j] += matrix1[i][j] * matrix2[k][j];
       
       }
       
       }
       
       }
       
       cout<<"resultant matrix after multiplication : "<<endl;
       
       for(int i=0;i<3;++i)
        
        {
        
  
        for(int j=0;j<3;++j)
        
       {
       
       cout<< result[i][j]<< " " ;
       
       }
       
       cout<<endl;
       
       }
       
       return 0;
       }


