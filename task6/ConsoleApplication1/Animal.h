#pragma once
#include "TypeOfNature.h"


class Animal : Description
{
private:
	bool wild = false;
	float height, width, weight;
	string colorFur;
	bool enableFur;
public:
	Animal() {
		cout << endl << "Enter height of animal ";
		cin >> height;
		cout << endl << "Enter width of animal ";
		cin >> height;
		cout << endl << "Enter weight of animal ";
		cin >> height;
		if (enableFur == true)
		{
			cout << endl << "Enter color of fur ";
				cin >> colorFur;
		}
	}
	void getHeight() {
		cout << height;
	}
	void setHeight() {
		cin >> height;
	}
	void getWidth() {
		cout << width;
	}
	void setWidth() {
		cin >> width;
	}
	void getWild() {
		cout << wild;
	}
	void setWild() {
		cin >> wild;
	}
	void getWeight() {
		cout << weight;
	}
	void setColorFur() {
		cin >> colorFur;
		if (enableFur == false)
		{
			cout << endl << "No fur";
			colorFur = "No fur";
		}
	}
	void getColorFur() {
		cout << colorFur;
	}
	void setWeight() {
		cin >> weight;
	}
	void getEnableFur() {
		cout << enableFur;
	}
	void setEnableFur() {
		cin >> enableFur;
		if (enableFur == true)
		{
			cout << endl << "Enter color of fur ";
				cin >> colorFur;
		}
	}
};

