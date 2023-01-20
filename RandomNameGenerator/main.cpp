#include<iostream>
#include "Generator.h"
#include "NameOrigins.h"
using namespace std;



int main()
{
	bool isMale = true;
	int numberOfNames = 22;
	int code = 25;
	int code2 = 13;

	Generator test1 = Generator();
	vector<string> firstNames = test1.getFirstName(code, isMale);
	vector<string> surnames = test1.getSurname(code2);

	NameOrigins test2 = NameOrigins();
	string firstNameOrigins = test2.getFirstNameOrigins(code);
	string surnameOrigins = test2.getSurnameOrigins(code);




	for (int i = 0; i < numberOfNames; i++)
	{
		cout << firstNames[i] << " " << surnames[i] << endl;
	}

	cout << endl;
	cout << "First name origins: " << firstNameOrigins << endl;
	cout << "Surname origins: " << surnameOrigins << endl;


	return 0;
}