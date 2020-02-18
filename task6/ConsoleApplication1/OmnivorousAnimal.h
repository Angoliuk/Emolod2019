#pragma once
#include "Animal.h"


class OmnivorousAnimal : public Animal
{
private:
	string preferenceTypeFood;
public:
	OmnivorousAnimal() {
		cout << "Enter food preference of animal(meat/planty)";
			cin >> preferenceTypeFood;
		if (preferenceTypeFood!="meat"|| preferenceTypeFood != "planty")
		{
			cout << "Error!";
			preferenceTypeFood = "undefined";
		}
	}
	void getPreferenceTypeFood() {
		cout << preferenceTypeFood;
	}
	void setPreferenceTypeFood() {
		cin >> preferenceTypeFood;
	}
};

