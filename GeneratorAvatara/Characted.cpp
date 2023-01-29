#include "Characted.h"

Characted::Characted(string gender, string tors, string hier, string clothe, string shorts,string skin)
{
	this->tors = tors;
	this->gender = gender;
	this->hier = hier;
	this->clothe = clothe;
	this->shorts = shorts;
	this->skin = skin;
}



vector <string> Characted::setHair(string str)
{
	
	

	ifstream hier("info\\hairstyles.csv");
	vector <string> buf;
	
	if (hier.is_open()) {
		while (getline(hier, str)) {

			str += "\n";
			buf.push_back(str);
		}
	}
	hier.close();
	return buf;
}


vector <string> Characted::setClothe(string str)
{
	ifstream clothe("info\\clothes.csv");
	vector <string> buf;

	if (clothe.is_open()) {
		while (getline(clothe, str)) {

			str += "\n";
			buf.push_back(str);
		}
	}
	clothe.close();
	return buf;
}

vector <string> Characted::setShort(string str)
{
	ifstream shorts("info\\clothes.csv");
	vector <string> buf;

	if (shorts.is_open()) {
		while (getline(shorts, str)) {

			str += "\n";
			buf.push_back(str);
		}
	}
	shorts.close();
	return buf;
}

string Characted::setTors()
{
	tors =gender;
 return  tors;
}

string Characted::setGender()
{
	int a = rand() % 2;
	if (a == 1) {
		 gender="man";
	}
	else if (a == 2) {
		gender = "woman";
	}
	return  gender;
}

string Characted::run()
{
	ofstream out;          
	out.open("info:\\generator.csv");
	if (out.is_open())
	{
		cout << gender,tors,hier,clothe,shorts,skin ;
	}
	return 0;
	
	
}


