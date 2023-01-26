#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <vector>

using namespace std;
class Characted
{
private:
	string gender;
	string tors;
	string hier;
	string clothe;
	string shorts;
	string skin;
public:
	Characted(string gender, string tors,string hier,string clothe,string shorts,string skin);

	vector <string> setHair(string str);
	vector <string> setClothe(string str);
	vector <string> setShort(string str);
	vector <string> setTors(string str);
	vector <string> setGender(string str);

	
};

