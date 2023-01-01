#include<iostream>
#include<string>
#include <vector>
#include "Generator.h"
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"
using namespace std;

Generator::Generator(int code, bool isMale, int number)
{
	this->isMaleName = isMale;
	this->numberOfRandomNames = number;
	this->firstNameCode = code;

	string firstName;
	if (code == 0)
	{
		//firstName.assign(MaleNameGiven::africanGivenNamesMale);
	}
	else
	{
		cout << "invalid code" << endl;
	}
}

Generator::Generator(bool isMaleName, int firstNameCode, int lastNameCode, string lastNameOrigins, int numberOfRandomNames)
{
	this->isMaleName = isMaleName;
	this->firstNameCode = firstNameCode;
	this->lastNameCode = lastNameCode;
	this->numberOfRandomNames = numberOfRandomNames;

}

Generator::~Generator()
{

}

bool Generator::isNameMale(int input) 
{
	if (input == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


string* Generator::getFirstName(int code, bool isMale, int number)
{
	string names;

	for (int i = 0; i < number; i++)
	{
		if (isMale == true)
		{
			if (code == 1)
			{
				//names = africanAmericanGivenNamesMale();
			}

		}
	}
}