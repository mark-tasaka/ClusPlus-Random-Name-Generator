#include<iostream>
#include<string>
#include <vector>
#include "Generator.h"
#include "MaleNameGiven.h"
#include "FemaleNameGiven.h"
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


vector<string> Generator::getFirstName(int code, bool isMale)
{
	if (isMale == true)
	{
		MaleNameGiven maleName = MaleNameGiven();

		this->firstName = maleName.getFirstName(code);
	}
	else
	{
		FemaleNameGiven femaleName = FemaleNameGiven();

		this->firstName = femaleName.getFirstName(code);
	}

	return firstName;

}

vector<string> Generator::getSurname(int code)
{
	Surname theSurname = Surname();
	this->surname = theSurname.getSurnames(code);

	return surname;
}