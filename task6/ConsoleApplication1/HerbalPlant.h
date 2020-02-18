#pragma once
#include "Plant.h"

class Herbal : public Plant
{
private:
	bool cerealPlant;
	string typeCereal;
public:
	Herbal() {
		cout << endl << "Is this cereal plant?(true/false)";
		cin >> cerealPlant;
		if (cerealPlant==true)
		{
			cout << endl << "Enter type of cereal";
			cin >> typeCereal;
		}
	}
	void getCerealPlant() {
		cout << cerealPlant;
	}
	void setCerealPlant() {
		cin >> cerealPlant;
		if (cerealPlant==true)
		{
			cout << endl << "Enter type of cereal";
			cin >> typeCereal;
		}
		else {
			typeCereal = "it`s not cereal plant";
		}
	}
	void getTypeCereal() {
		cout << typeCereal;
	}
	void setTypeCereal() {
		cin >> typeCereal;
		if (cerealPlant==false)
		{
			cout << endl << "it`s not cereal plant";
			typeCereal = "it`s not cereal plant";
		}
	}
};

