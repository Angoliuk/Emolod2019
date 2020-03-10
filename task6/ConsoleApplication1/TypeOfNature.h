#pragma once

#include <iostream>

using namespace std;

class TypeOfNature
{
private:
	bool extinct;
	bool endangered;
	bool danger;
	string name;
public:
	TypeOfNature() {
		cout << endl << "Enter name of creature " << endl;
		cin >> name;
		cout << endl << "answer the question (true/false)" << endl << "Is this creature extinct?" << endl;
		cin >> extinct;
		cout << endl << "Is this creature endangered?" << endl;
		cin >> endangered;
		cout << endl << "Is this creature danger?" << endl;
		cin >> danger;
		cout << endl;
	}
	void getExtinct() {
		cout << extinct;
	}
	void setExtinct() {
		cin >> extinct;
	}
	void getEndangered() {
		cout << endangered;
	}
	void setEndangered() {
		cin >> endangered;
	}
	void getDanger() {
		cout << danger;
	}
	void setDanger() {
		cin >> danger;
	}
	void getName() {
		cout << name;
	}
	void setName() {
		cin >> name;
	}
};

