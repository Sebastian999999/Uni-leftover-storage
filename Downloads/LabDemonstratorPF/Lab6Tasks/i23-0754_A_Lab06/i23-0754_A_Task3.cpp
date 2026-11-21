#include <iostream>

		//Muhammad Umer || 23i-0754 || A

int main(){

	int age;
	char gender, health;
	
		std::cout<<"\nWelcome to the Extreme Rides in Joyland!!!!!!!!!!!!!"<<std::endl;
		
		std::cout<<"Enter Gender of the Rider (M/F) : "; std::cin.get(gender);
	
	
		std::cout<<"Enter Age of The Rider : "; std::cin>>age;
	
	bool y = (age>=25);
	
		std::cout<<"Enter Health Issues (Y/N) : "; std::cin>>health;
	
	bool z = (health == 'Y' || health == 'y');
		
	(gender == 'M' || gender == 'm' ) ?  (y ? std::cout<<"You Can Enjoy These Rides": std::cout<< "Sorry, These Rides Are Not Safe For You") : (z ? std::cout<<"Sorry, These Rides Are Not Safe For You" : std::cout<<"You Can Enjoy These Rides");
	

return 0;
}
