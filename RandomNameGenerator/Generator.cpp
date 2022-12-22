#include<iostream>
#include "Generator.h"
using namespace std;

Generator::Generator(bool isMaleName, string firstName, string firstNameOrigins, string lastName, string lastNameOrigins, int numberOfRandomNames)
{
	this->isMaleName = isMaleName;
	this->firstName = firstName;
	this->firstNameOrigins = firstNameOrigins;
	this->lastName = lastName;
	this->lastNameOrigins = lastNameOrigins;
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