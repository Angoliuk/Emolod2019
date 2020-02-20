#pragma once
#include "Plant.h"
class WoodyPlant :
	public Plant
{
private:
	string colorBark;
	string	leafType;

public:
	WoodyPlant() {
		cout << endl << "Enter type of leaf";
		cin >> leafType;
		cout << endl << "Enter color of bark";
		cin >> colorBark;
	};
	void getColorBark() {
		cout << colorBark;
	}
	void setColorBark() {
		cin >> colorBark;
	}
	void getLeafType() {
		cout << leafType;
	}
	void setLeafType() {
		cin >> leafType;
	}
};

