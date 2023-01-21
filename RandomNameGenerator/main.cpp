#include<iostream>
#include "Generator.h"
#include "NameOrigins.h"
#include<fstream>
#include <iomanip>
using namespace std;



int main()
{
	bool isMale = true;
	int numberOfNames = 22;
	int code = 25;
	int code2 = 13;
	ofstream file;
	int input = 0;

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

	cout << endl;

	cout << "Do you wish to create a text file?  Press '1' if you want a text file. " << endl;
	cin >> input;

	if (input == 1)
	{
		file.open("randomNames.txt");

		for (int i = 0; i < numberOfNames; i++)
		{
			file << firstNames[i] << " " << surnames[i] << endl;
		}

		file << endl;
		file << "First name origins: " << firstNameOrigins << endl;
		file << "Surname origins: " << surnameOrigins << endl;

		cout << "Text file created" << endl;
	}




	return 0;
}