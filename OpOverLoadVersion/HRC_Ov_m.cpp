#include "HRC_Ov_lib.h"

int main(){
	int Age;
//Initializes a default class prior to accepting user input
	HeartRates person1;

//operator can be overloaded, clears Bday, Bmonth, Byear
	std::cout << "enter your name (first last) & date of birth (dd mm yyyy) seperated by spaces" << std::endl;
	std::cin >> person1;


	std::cout << "Your name is : " << person1.getFirstName() << " "
		<< person1.getLastName() << std::endl;
	std::cout << "Your date of birth is : " << person1.getBirthMonth()
		<< "/" << person1.getBirthDay() << "/" << person1.getBirthYear()<< std::endl;
	
	Age = person1.getAge();
	std::cout << Age << " is your age" << std::endl;
	std::cout << "Your maximum Heart Rate is : " << person1.getMaxHeartRate(Age) << std::endl;
	std::cout << "Your Target Heart Rate is between " << person1.getTargetHeartRate(Age, 0.5) << 
		" and " << person1.getTargetHeartRate(Age, .85) << std::endl;
	return 0;
}
