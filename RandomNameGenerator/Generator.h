#ifndef GENERATOR_H
#define GENERATOR_H
#include <string>
#include <vector>
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"
#include "Surname.h"
#include "NameOrigins.h"

using namespace std;

class Generator {
	public:
		bool isNameMale(int input);

		vector<string> getFirstName(int code, bool isMale, int count);
		vector<string> getSurname(int code, int count);

		//string surnameOrigins(int code);
		//string firstNameOrigins(int code);


	private:
		bool isMaleName;
		//int firstNameCode;
		//int lastNameCode;

		vector<string> firstName;
		vector<string> surname;
		string firstNameOrigins;
		string surnameOrigins;
		//string firstNameOrigins;
		//string lastName;
		//string lastNameOrigins;
		//int numberOfRandomNames;
};

#endif