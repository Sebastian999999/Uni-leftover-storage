#include<iostream>

using namespace std;

int main(){

        char array[]={'h','a','m','e','e','d'};
        
        
        int numbercount=0;
        
        char character='a';
        
        cout<<"your name is : ";

        for(int i=0;i<=6;i++)
        {
        
        cout<<array[i];
        
        }
        
         for(int i=0;i<=6;i++)
         
        {
        
        if(character==array[i])
        
        {
        
        numbercount++;
        
        }
        
        }
        
        
        cout<<" there are  "<< numbercount <<" a's in my name . "<<endl;
        
        }
        
