#ifndef  NAME_ORIGINS_H
#define NAME_ORIGINS_H
#include<iostream>
#include<string>
using namespace std;

class NameOrigins
{
	public:
		string getFirstNameOrigins(int code);
		string getSurnameOrigins(int code);

	private:
		string firstNameOrigins;
		string surnameOrigins;
};

#endif // ! NAME_ORIGINS_H
