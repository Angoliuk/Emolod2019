#pragma once
#include "Animal.h"


class CarnivorousAnimal : Animal
{
private:
	bool hunterAnimal;
public:
	CarnivorousAnimal() {
		cout << endl << "Is this animal hunt?(true/false)";
			cin >> hunterAnimal;
	}
	void getHunterAnimal() {
		cout << hunterAnimal;
	}
	void setHunterAnimal() {
		cin >> hunterAnimal;
	}
};

