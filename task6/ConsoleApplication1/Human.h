#pragma once
#include "TypeOfNature.h"


class Human : public Description
{
private:
	float height, width, weight,age;
	string hairColor;
	string	gender;
public:
	Human() {
		cout << endl << "Enter height of human ";
			cin >> height;
			cout << endl << "Enter width of human ";
			cin >> width;
			cout << endl << "Enter weight of human ";
			cin >> weight;
			cout << endl << "Enter age of human ";
			cin >> age;
			cout << endl << "Enter color of hair ";
			cin >> hairColor;
			cout << endl << "Enter gender of human ";
			cin >> gender;

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
	void getWeight() {
		cout << weight;
	}
	void setWeight() {
		cin >> weight;
	}
	void getAge() {
		cout << age;
	}
	void setAge() {
		cin >> age;
	}
	void getHairColor() {
		cout << hairColor;
	}
	void setHairColor() {
		cin >> hairColor;
	}
	void getGender() {
		cout << gender;
	}
	void setGender() {
		cin >> gender;
	}
};

