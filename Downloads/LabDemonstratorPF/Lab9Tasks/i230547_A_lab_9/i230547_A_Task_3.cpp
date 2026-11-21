#include<iostream>

using namespace std;


int main(){

     const int size=5;
     
     int inputarray[size];
     
     int squarearray[size];
     
     int reversedarray[size];
     
     
     cout<<" enter "<<size <<" integers : "<<endl;
     
     for(int i=0; i<size; i++)
     
     {
     
     cin>>inputarray[i];
     
     squarearray[i]=inputarray[i] * inputarray[i] ;
     
     }
     
     for(int i=0; i<size; ++i){
     
     reversedarray[i]=squarearray[size - 1 - i];
     
     }
     
     
       cout<<"squaredelements in reversed order: "<<endl;
       
       
      for(int i=0; i<size; ++i){
      
      cout<<reversedarray[i]<<" ";
      }
      
      cout<<endl;
      
      return 0;
      
      }
