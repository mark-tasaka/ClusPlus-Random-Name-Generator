#ifndef SURNAME_H
#define SURNAME_H
#include<iostream>
#include <vector>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;

class Surname
{
public:
	vector<string> africanSurnames() const;
	vector<string> arabicSurnames() const;
	vector<string> armenianSurnames() const;
	vector<string> catalanSurnames() const;
	vector<string> chineseSurnames() const;
	vector<string> cornishSurnames() const;
	vector<string> czechSurnames() const;
	vector<string> danishSurnames() const;
	vector<string> dutchSurnames() const;
	vector<string> englishSurnames() const;
	vector<string> finnishSurnames() const;
	vector<string> frenchSurnames() const;
	vector<string> galicianSurnames() const;
	vector<string> germanSurnames() const;
	vector<string> greekSurnames() const;
	vector<string> hungarianSurnames() const;
	vector<string> indianSurnames() const;
	vector<string> irishSurnames() const;
	vector<string> italianSurnames() const;
	vector<string> japaneseSurnames() const;
	vector<string> jewishSurnames() const;
	vector<string> koreanSurnames() const;
	vector<string> lithuanianSurnames() const;
	vector<string> muslimSurnames() const;
	vector<string> norwegianSurnames() const;
	vector<string> polishSurnames() const;
	vector<string> portugueseSurnames() const;
	vector<string> russianSurnames() const;
	vector<string> scandinavianSurnames() const;
	vector<string> scottishSurnames() const;
	vector<string> slavicSurnames() const;
	vector<string> spanishSurnames() const;
	vector<string> swedishSurnames() const;
	vector<string> swissSurnames() const;
	vector<string> turkishSurnames() const;
	vector<string> ukranianSurnames() const;
	vector<string> vietnameseSurnames() const;
	vector<string> welshSurnames() const;
	vector<string> getSurnames(int code) const;

private:
	vector<string> surname;
};

#endif // !SURNAME_H
