#ifndef GENERATOR_H
#define GENERATOR_H
#include <string>
#include <vector>
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"

using namespace std;

class Generator {
	public:
		bool isNameMale(int input);

		vector<string> getFirstName(int code, bool isMale);


	private:
		bool isMaleName;
		//int firstNameCode;
		//int lastNameCode;

		vector<string> firstName;
		//string firstNameOrigins;
		//string lastName;
		//string lastNameOrigins;
		//int numberOfRandomNames;
};

#endif