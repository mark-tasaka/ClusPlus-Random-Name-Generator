#include<iostream>
#include<string>
#include "Generator.h"
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"
using namespace std;

Generator::Generator(int code)
{
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
