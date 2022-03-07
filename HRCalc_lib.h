/* FileName: HRCalc_lib.h */
#ifndef HRCalc
#define HRCalc
//header guard
#include <string>

class HeartRates{
	private:
		std::string firstName;
		std::string lastName;
		int BirthDay;
		int BirthMonth;
		int BirthYear;

	public:
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
