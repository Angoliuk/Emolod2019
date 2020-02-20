#pragma once
#include "TypeOfNature.h"
class Plant :
	public TypeOfNature
{
private:
	float height, width;
	string colorFlower;
	bool enableFlower;
public:
	Plant() {
		cout << endl << "Enter height of plant ";
		cin >> height;
		cout << endl << "Enter width of plant ";
		cin >> width;
		cout << endl << "Is plant have flowers(true/false) ";
		cin >> enableFlower;
		if (enableFlower == true)
		{
			cout << endl << "Enter color of flower ";
			cin >> colorFlower;
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
	void getColorFlower() {
		cout << colorFlower;
	}
	void setColorFlower() {
		cin >> colorFlower;
		if (enableFlower == false)
		{
			cout << endl << "No flower";
			colorFlower = "No flower";
		}
	}
	void getEnableFlower() {
		cout << enableFlower;
	}
	void setEnableFlower() {
		cin >> enableFlower;
		if (enableFlower == true)
		{
			cout << endl << "Enter color of flower ";
			cin >> colorFlower;
		}
	}
};

