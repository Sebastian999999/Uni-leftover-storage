//Zibyah Ahmad
//23I-0734
//Q4-CS A
#include<iostream>
using namespace std;
int main()
{
  int temp;
  cout<<"Enter Temprature"<<endl;
  cin>>temp;
  switch( temp>=40 )
  { 
    case 1: cout<<"Very Hot"<<endl;
    	    break;
    case 0:
    switch(temp>=30 && temp<40)
    {
        case 1:cout<<"Hot"<<endl;
               break;
        case 0:
            switch(temp>=20 && temp<30) 
             {
              case 1:cout<<"Normal"<<endl;
                     break;
              case 0:
            	    switch(temp>=10 && temp<20)
            	     {
            	       case 1:cout<<"Cold"<<endl;
            	              break;
            	       case 0:
            	         switch(temp>=0 && temp<10) 
            	            { 
            	             case 1:cout<<"Very Cold"<<endl;break;
            	             case 0:
            	            switch(temp<0)
            	             {
            	             case 1:cout<<"Freezing"<<endl;
            	                    break;
            	             case 0:cout<<"Invalid"<<endl; 
            	                    break;
            	             } 
            	            break;
            	            }
            	          break;
            	          }
            	       break;
            	        }
            	           break;
            	           }
         return 0;
         }
  }
