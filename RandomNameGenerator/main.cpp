#include<iostream>
#include "Generator.h"
using namespace std;

int main()
{
	bool isMale = true;
	int numberOfNames = 10;
	int code = 1;

	Generator test1 = Generator();
	vector<string> firstNames = test1.getFirstName(code, isMale);

	for (int i = 0; i < numberOfNames; i++)
	{
		cout << firstNames[i] << endl;
	}


	return 0;
}