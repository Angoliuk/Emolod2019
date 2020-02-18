#pragma once
#include "Plant.h"


class Woody : public Plant
{
private:
	string colorBark;
	string	leafType;

public:
	Woody() {
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

