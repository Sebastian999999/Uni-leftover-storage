#include <iostream>

		//Muhammad Umer || 23i-0754 || A

int main(){

	float num_1, num_2, result;
	char oper;
		
		
		std::cout<<"\nWelcome to the Arthemetic Calculator!!!!!!!!!!!!!"<<std::endl;
		
		std::cout<<"Enter Number 1 : "; std::cin>>num_1;
		std::cout<<"Enter Number 2 : "; std::cin>>num_2;
		
		std::cout<<"\nWhat Operands You want to use???"<<std::endl;
		std::cout<<"Addition (+) "<<std::endl;
		std::cout<<"Subtraction (-) "<<std::endl;
		std::cout<<"Multiplication (*) "<<std::endl;
		std::cout<<"Division (/) "<<std::endl;
		std::cout<<"Cancel (.) "<<std::endl;

		std::cout<<"\nEnter Operand : "; std::cin>>oper;
		
	switch (oper){
		
		case '+': 
			result = num_1 + num_2;
			std::cout<<"The Result is : "<<result<<std::endl;
			break;
	
		case '-':
			result = num_1 - num_2;
			std::cout<<"The Result is : "<<result<<std::endl;
			break;
		
		case '*': 
			result = num_1 * num_2;
			std::cout<<"The Result is : "<<result<<std::endl;
			break;
		
		case '/':
			switch(num_2 >0 || num_2<0){
				
				case true:
					result = num_1 / num_2;
					std::cout<<"The Result is : "<<result<<std::endl;
					break;
					
				case false:
					std::cout<<"Invalid Argument"<<std::endl;
					break;
					  }
			break;
			
		case '.':
			std::cout<<"You Cancelled The Operation"<<std::endl;
			break;
			
		default :
			std::cout<<"Invalid Input"<<std::endl;
		     }

return 0;
}
