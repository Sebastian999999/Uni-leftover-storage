#include <iostream>
	
	//Muhammad Umer || 23i-0754 || A
	
int main(){
		
		
	char operand, operand1;
	
		std::cout<<"Enter A Charachter: "; std::cin.get(operand);
	
	switch ( ( operand >= '0' && operand <= '9') || (operand >= 'A' && operand <= 'Z') || (operand >= 'a' && operand <='z') ){
	
	case true: 
		operand1 = operand;
		
		switch((operand1>='0'&& operand1<='9')){
			
			case true:
				std::cout<<"You Entered A Digit"<<std::endl;
				break;
						      }
		switch((operand1>='A'&& operand1<='Z')){
			
			case true:
				std::cout<<"You Entered An Uppercase Alphabet"<<std::endl;
				break;
						      }
		switch((operand1>='a'&& operand1<='z')){
			
			case true:
				std::cout<<"You Entered A Lowercase Alphabet"<<std::endl;
				break;
						      }
		break;
		
	default:
		std::cout<<"Invalid Output"<<std::endl;
		break;
	}
	
return 0;
}
