#include<iostream>
#include "Generator.h"
#include "NameOrigins.h"
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;



int main()
{

	srand(time(0));

	bool isMale = true;
	int numberOfNames = 0;
	int code = rand() %49 + 1;
	int code2 = rand() % 37 + 1;
	ofstream file;
	int input = 0;

	Generator test1 = Generator();
	vector<string> firstNames = test1.getFirstName(code, isMale, numberOfNames);
	vector<string> surnames = test1.getSurname(code2, numberOfNames);

	NameOrigins test2 = NameOrigins();
	string firstNameOrigins = test2.getFirstNameOrigins(code);
	string surnameOrigins = test2.getSurnameOrigins(code2);

	cout << "Welcome to the Random Name Generator.  The generator has been designed to creat a list of randomly generated names." << endl << endl;

	//Press any key to continue
	system("pause");
	cout << endl;

	cout << "Please enter the number of random names you would like to generate.  Please enter an integer." << endl;

	cin >> numberOfNames;
	
	for (int i = 0; i < numberOfNames; i++)
	{
		cout << firstNames[i] << " " << surnames[i] << endl;
	}

	//for (int i = 0; i < numberOfNames; i++)
	//{
	//	cout << firstNames[i] << " " << surnames[i] << endl;
	//}

	cout << endl;
	cout << "First name origins: " << firstNameOrigins << endl;
	cout << "Surname origins: " << surnameOrigins << endl;

	cout << endl;

	cout << "Do you wish to create a text file?  Press '1' if you want a text file. " << endl;
	cin >> input;

	if (input == 1)
	{
		string fileName = "randomNames";
		string addition = to_string(1);
		string endTxt = ".txt";
		string theFileName = fileName + addition + endTxt;
		file.open(theFileName);

		//file << "Random Names" << endl;
		//file << "---------------------------------" << endl << endl;

		for (int i = 0; i < numberOfNames; i++)
		{
			file << firstNames[i] << " " << surnames[i] << endl;
		}

		file << endl;
		file << "---------------------------------" << endl << endl;
		file << "First name origins: " << firstNameOrigins << endl;
		file << "Surname origins: " << surnameOrigins << endl;
		file << "Number of Random Names Generated: " << numberOfNames << endl;

		cout << "Text file created" << endl;
	}

	file.close();



	return 0;
}