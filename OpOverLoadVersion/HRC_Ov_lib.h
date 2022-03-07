/* FileName: HRC_Ov_lib.h */
#ifndef HRCalc
#define HRCalc
//header guard
#include <string>
#include <iostream>

class HeartRates{
	private:
		std::string firstName;
		std::string lastName;
		int BirthDay;
		int BirthMonth;
		int BirthYear;
//preparing for an op overload		
		friend std::istream &operator>>(std::istream &in, HeartRates &obj);

	public:
//default construtor
		HeartRates();
//constructor 
		HeartRates(const std::string &, const std::string &, 
			int=0, int=0, int=0);
		
		void setFirstName(const std::string &);
		std::string getFirstName() const;

		void setLastName(const std::string &);
		std::string getLastName() const;

		void setBirthDay(int);
		int getBirthDay() const;

		void setBirthMonth(int);
		int getBirthMonth() const;

		void setBirthYear(int);
		int getBirthYear() const;

		int getAge() const;
		int getMaxHeartRate(int) const;
		float getTargetHeartRate(int, float) const;
};

#endif
