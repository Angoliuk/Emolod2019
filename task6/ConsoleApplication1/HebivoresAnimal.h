#pragma once
#include "Animal.h"


class HebivoresAnimal : public Animal
{
private:
	string typeFood;
public:
	HebivoresAnimal() {
		cout << endl << "What type of plant eat this animal?";
		cin >> typeFood;
	}
	void getTypeFood() {
		cout << typeFood;
	}
	void setTypeFood() {
		cin >> typeFood;
	}
};

