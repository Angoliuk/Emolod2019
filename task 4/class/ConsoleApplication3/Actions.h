#pragma once
#include <time.h>
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

class Actions
{
private:
public:

	void getFirstElement(vector<vector<int>> array) {
		cout << "First element is : " << array.front();
	}

	int getLastElement(int array) {
		cout << array.back();
		return 0;
	}

	int getLength(int array) {
		cout << "length is : " << array.size();
		return 0;
	}
	//dont work
	int reverseArray(int** array, int height, int width) {
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				int current = array[j][i];
				array[j][i] = array[width][i];
				array[width][i] = current;
				width--;
			}
		}
		return 0;
	}
};

