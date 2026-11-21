#include <iostream>

		//Muhammad Umer || 23i-0754 || A


int main(){
	
	float temp, temp1;
	
	std::cout<<"\nLets Determine What Kind Of Temperature It Is?"<<std::endl;
	std::cout<<"Enter Temperature in Centigrade : "; std::cin>>temp;
	
	switch (temp<=100 && temp>=-100){
		
		case true:
		
			temp1 = temp;
			
			switch (temp1<0){
				
				case true: 
					std::cout<<"Temperature is Freezing Cold"<<std::endl;
					break;
					 }
					 
			switch (temp1>=0 && temp1<=10){
			
				case true:
					std::cout<<"Temperature is Very Cold"<<std::endl;
					break;
					  	     }
					  	     
			switch (temp1>10 && temp1<=20){
				
				case true:
					std::cout<<"Temperature is Cold"<<std::endl;
					break;
						    }
				
			switch (temp1>20 && temp1<=30){
			
				case true:
					std::cout<<"Temperature is Normal"<<std::endl;
					break;
						    }
						    
			switch (temp1>30 && temp1<=40){
				
				case true:
					std::cout<<"Temperature is Hot"<<std::endl;
					break;
						    }
			
			switch (temp1>40){
			
				case true:
					std::cout<<"Temperature is Very Hot"<<std::endl;
					break;
					
					 }
			break;
		
		default:
			std::cout<<"Invalid Argument"<<std::endl;
			break;	
	}



return 0;

}
