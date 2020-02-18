#pragma once
#include "Plant.h"


class Shrubby : public Plant
{
private:
	bool lianaPlant,decorativePlant;
public:
	Shrubby() {
		cout << endl << "Is this liana?(true/false)";
			cin >> lianaPlant;
			cout << endl << "Is this decorative?(true/false)";
			cin >> decorativePlant;
	}
	void getLianaPlant() {
		cout << lianaPlant;
	}
	void setLianaPlant() {
		cin >> lianaPlant;
	}
	void getDecorativePlant() {
		cout << decorativePlant;
	}
	void setDecorativePlant() {
		cin >> decorativePlant;
	}
};

