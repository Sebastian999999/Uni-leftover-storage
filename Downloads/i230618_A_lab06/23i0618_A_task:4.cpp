//iman suleman 23i0618
#include<iostream>
using namespace std;
int main()
{
	
	int temp;
	cout<<"Enter temperature :";
	cin>>temp;
	
	switch(temp < 0)
	{
	  case 1:
	  cout<<"freezing \n";
	  
	  case 0:
 		switch(temp >= 40)
 		{
 		 case 1:
         	 cout<<"very hot \n";
         	 break;
         	 
         	 case 0:
         	  switch(temp < 40 && temp >=30)
         	  {
         	   case 1:
         	   cout<<"hot \n";
         	   break;
         	   
         	   case 0:
         	    switch(temp < 30 && temp >=20)
		 	  {
		 	   case 1:
		 	   cout<<"normal \n";
		 	   break;
		 	   
		 	   case 0:
		 	   	switch(temp < 20 && temp >=10)
			 	  {
			 	   case 1:
			 	   cout<<"cold \n";
			 	   break;
			 	   
			 	   case 0:
			 	   switch(temp < 10 && temp >= 0)
				 	  {
				 	   case 1:
				 	   cout<<"very cold \n";
				 	   break;
				 	   	
				 	     //default:
						// cout<<"invalid input \n";
						 //break;
				 	   	
				 	   
				 	  }
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
