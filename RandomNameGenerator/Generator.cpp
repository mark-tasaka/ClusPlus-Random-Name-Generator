#include<iostream>
#include<string>
#include <vector>
#include "Generator.h"
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"
#include "NameOrigins.h"
using namespace std;

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


vector<string> Generator::getFirstName(int code, bool isMale, int count)
{
	vector<string> firstName;
	//firstName.resize(count);

	if (isMale == true)
	{
		MaleNameGiven maleName = MaleNameGiven();

		firstName = maleName.getFirstName(code, count);
	}
	else
	{
		FemaleNameGiven femaleName = FemaleNameGiven();

		firstName = femaleName.getFirstName(code, count);
	}

	return firstName;

}

vector<string> Generator::getSurname(int code, int count)
{
	vector<string> surname;
	//surname.resize(count);
	Surname theSurname = Surname();
	surname = theSurname.getSurnames(code, count);

	return surname;
}

//
//string Generator::surnameOrigins(int code)
//{
//	NameOrigins theSurnameOrigins = NameOrigins();
//	this->surnameOrigins = theSurnameOrigins.getSurnameOrigins(code);
//
//	return surnameOrigins;
//
//}
//
//string Generator::firstNameOrigins(int code)
//{
//
//}