#ifndef GENERATOR_H
#define GENERATOR_H
#include <string>
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"

using namespace std;

class Generator {
	public:

		//for testing purposes
		Generator(int code);

		Generator(bool isMaleName, int firstNameCode, int lastNameCode, string lastNameOrigins, int numberOfRandomNames);

		//Dtor
		~Generator();

		bool isNameMale(int input);

	private:
		bool isMaleName;
		int firstNameCode;
		int lastNameCode;

		string firstName;
		string firstNameOrigins;
		string lastName;
		string lastNameOrigins;
		int numberOfRandomNames;
};

#endif