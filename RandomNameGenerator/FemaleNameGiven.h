#ifndef FEMALENAMEGIVEN_H
#define FEMALENAMEGIVEN_H
#include<iostream>
#include <vector>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;


class FemaleNameGiven {
public:
	vector<string> africanGivenNamesFemale() const;
	vector<string> africanAmericanGivenNamesFemale() const;
	vector<string> americanGivenNamesFemale() const;
	vector<string> arabicGivenNamesFemale() const;
	vector<string> armenianGivenNamesFemale() const;
	vector<string> celticGivenNamesFemale() const;
	vector<string> chineseGivenNamesFemale() const;
	vector<string> czechGivenNamesFemale() const;
	vector<string> danishGivenNamesFemale() const;
	vector<string> dutchGivenNamesFemale() const;
	vector<string> egyptianGivenNamesFemale() const;
	vector<string> englishGivenNamesFemale() const;
	vector<string> finnishGivenNamesFemale() const;
	vector<string> frenchGivenNamesFemale() const;
	vector<string> gaelicGivenNamesFemale() const;
	vector<string> germanGivenNamesFemale() const;
	vector<string> greekGivenNamesFemale() const;
	vector<string> hawaiianGivenNamesFemale() const;
	vector<string> hebrewGivenNamesFemale() const;
	vector<string> hindiGivenNamesFemale() const;
	vector<string> hungarianGivenNamesFemale() const;
	vector<string> indianGivenNamesFemale() const;
	vector<string> irishGivenNamesFemale() const;
	vector<string> italianGivenNamesFemale() const;
	vector<string> japaneseGivenNamesFemale() const;
	vector<string> koreanGivenNamesFemale() const;
	vector<string> latinGivenNamesFemale() const;
	vector<string> middleEnglishGivenNamesFemale() const;
	vector<string> nativeAmericanGivenNamesFemale() const;
	vector<string> norseGivenNamesFemale() const;
	vector<string> oldEnglishGivenNamesFemale() const;
	vector<string> oldFrenchGivenNamesFemale() const;
	vector<string> oldGermanGivenNamesFemale() const;
	vector<string> oldNorseGivenNamesFemale() const;
	vector<string> persianGivenNamesFemale() const;
	vector<string> polishGivenNamesFemale() const;
	vector<string> polynesianGivenNamesFemale() const;
	vector<string> russianGivenNamesFemale() const;
	vector<string> sanskritGivenNamesFemale() const;
	vector<string> scandinavianGivenNamesFemale() const;
	vector<string> scottishGivenNamesFemale() const;
	vector<string> slavicGivenNamesFemale() const;
	vector<string> spanishGivenNamesFemale() const;
	vector<string> swahiliGivenNamesFemale() const;
	vector<string> swedishGivenNamesFemale() const;
	vector<string> teutonicGivenNamesFemale() const;
	vector<string> turkishGivenNamesFemale() const;
	vector<string> vietnameseGivenNamesFemale() const;
	vector<string> welshGivenNamesFemale() const;
	vector<string> yiddishGivenNamesFemale() const;
	vector<string> getFirstName(int select) const;

private:
	vector<string> firstName;
};

#endif
