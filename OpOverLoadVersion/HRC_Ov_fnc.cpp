/* FileName: HRCTest_fnc.cpp */
#include "HRC_Ov_lib.h"

//default constructor
HeartRates::HeartRates(){
	firstName = "null";
	lastName = "null";
	setBirthYear(0);
	setBirthMonth(1);
	setBirthDay(1);
}

//constructor
HeartRates::HeartRates(const std::string &first, const std::string &last, 
		int day, int month, int year){
	firstName = first;
	lastName = last;
	setBirthYear(year);
	setBirthMonth(month);
	setBirthDay(day);
}
//operator overload
std::istream &operator>>(std::istream &in, HeartRates &obj){
	in >> obj.firstName >> obj.lastName >> obj.BirthDay >> obj.BirthMonth >> obj.BirthYear;
	 return in;
}

void HeartRates::setFirstName(const std::string &first){
	firstName = first;
	return;
}

std::string HeartRates::getFirstName() const{
	return firstName;
}

void HeartRates::setLastName(const std::string &last){
	lastName = last;
	return;
}

std::string HeartRates::getLastName() const{
	return lastName;
}

void HeartRates::setBirthDay(int day){
/* exception for invalid day */

/*	if ( (getBirthMonth() == 4) || (getBirthMonth() == 6) || (getBirthMonth() == 9)
		|| (getBirthMonth() == 11) ){
		if ( (day<1) || (day>30) ){
			throw std::invalid_argument("Invalid birth day entered");
		}
	}


	if (getBirthMonth()==2){
		if (getBirthYear()%4 != 0){
			if ( (day<1) || (day>28) ){
				throw std::invalid_argument("Invalid Birth Day entered");
			}
		} else {
			if ( (day<1) || (day>29) ){
				throw std::invalid_argument("Invalid Birth Day enetered");
			}
		}
	} */
/* end of exception code */

	BirthDay = day;
	return;
}

int HeartRates::getBirthDay() const{
//insert exception	
	if ( (getBirthMonth() == 4) || (getBirthMonth() == 6) || (getBirthMonth() == 9)
		|| (getBirthMonth() == 11) ){
		if ( (BirthDay<1) || (BirthDay>30) ){
			throw std::invalid_argument("Invalid birth day entered");
		}
	}


	if (getBirthMonth()==2){
		if (getBirthYear()%4 != 0){
			if ( (BirthDay<1) || (BirthDay>28) ){
				throw std::invalid_argument("Invalid Birth Day entered");
			}
		} else {
			if ( (BirthDay<1) || (BirthDay>29) ){
				throw std::invalid_argument("Invalid Birth Day enetered");
			}
		}
	}
	return BirthDay;
}

void HeartRates::setBirthMonth(int month){
//exception for invalid month
/*	if ( (month<1) || (month>12) ){
		throw std::invalid_argument("Invalid birth month entered");
	}
*/
	BirthMonth = month;
	return;
}

int HeartRates::getBirthMonth() const{
	if ( (BirthMonth<1) || (BirthMonth>12) ){
		throw std::invalid_argument("Invalid birth month entered");
	}
	return BirthMonth;
}

void HeartRates::setBirthYear(int year){
	BirthYear = year;
	return;
}

int HeartRates::getBirthYear() const{
	return BirthYear;
}

int HeartRates::getAge() const{
	int day, month, year;
	int result;
	std::cout << "enter the current date (dd mm yyyy)" << std::endl;
		std::cin >> day >> month >> year;

/* Following code is to check for valid date entries */		
	if ( (month<1) || (month>12) ){
		throw std::invalid_argument("Invalid current date entered");
	}
	if ( (month==4) || (month==6) || (month==9) || (month==11) ){ 
		if( (day<1) || (day>30) ){
			throw std::invalid_argument("Invalid current date entered");
		}
	}
	if (month==2){
		if (year%4 != 0){
			if ( (day<1) || (day>28) ){
				throw std::invalid_argument("Invalid current date entered");
			}
		} else {
			if ( (day<1) || (day>29) ){
				throw std::invalid_argument("Invalid current date enetered");
			}
		}
	}
/* end of exception code */

	result = year - getBirthYear();
	if (month < getBirthMonth()){
		result --;
	}
	if ((month == getBirthMonth()) && (day < getBirthDay())){
		result --;
	}

	return result;
}

int HeartRates::getMaxHeartRate(int Age) const{
	return 220 - Age;
}

float HeartRates::getTargetHeartRate(int Age, float percent) const{
	return getMaxHeartRate(Age) * percent;
}
