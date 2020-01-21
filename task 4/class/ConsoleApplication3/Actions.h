#pragma once
#include <time.h>
#include <iostream>
#include <iomanip>;

using namespace std;

class Actions
{
private:
	int length, firstElem, lastElem;
public:

	int** getArray(int width, int height) {

		srand(time(0));

		int** array = new int* [width];

		for (int i = 0; i < width; i++)
		{
			array[i] = new int[height];
		}

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				array[j][i] = rand()%99 ;
			}
		}

		return array;

	}

	int returnArray(int** array, int width, int height) {

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << setw(4) << array[j][i];
			}
			cout << endl;
		}
		return 0;

	}

	int setFirstElement(int** array) {
		cout << "First element is : ";
		cout << array[0][0];
		return 0;
	}

	int setLastElement(int** array, int width, int height) {
		int length = width * height;
		cout << array[width-1][height-1];
		return 0;
	}

	int setLength(int** array, int width, int height) {
		int length = width * height;
		cout << "length is : " << length;
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

