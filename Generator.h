#ifndef GENERATOR_H
#define GENERATOR_H
#include <string>

using namespace std;

class Generator {
	public:
		Generator(bool isMaleName, string firstName, string firstNameOrigins, string lastName, string lastNameOrigins, int numberOfRandomNames);

		//Dtor
		~Generator();

		bool isNameMale(int input);

	private:
		bool isMaleName;
		string firstName;
		string firstNameOrigins;
		string lastName;
		string lastNameOrigins;
		int numberOfRandomNames;
};

#endif