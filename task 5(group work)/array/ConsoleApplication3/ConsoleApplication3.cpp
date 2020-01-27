#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(0));

    int width, height, min=50, max=0, sumMod2=0, numMod2=0;
	float average;

	cout << "Enter width of array : ";
	cin >> width;
	cout << "Enter height of array : ";
	cin >> height;

    int** array = new int*[width];
	for (int i = 0; i < width; i++)
	{
		array[i] = new int[height];
	}

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			array[i][j] = rand() % 50+1;

			if (array[i][j] > max)
			{
				max = array[i][j];
			}

			if (min > array[i][j])
			{
				min = array[i][j];
			}

			if (array[i][j]%2==0)
			{
				sumMod2 += array[i][j];
				numMod2++;
			}

			cout << setw(4) << array[i][j];
		}
		cout << endl;
	}
	average = sumMod2 / numMod2;
	cout << endl << "Average number of array : " << average;
	cout << endl << "Min number of array : " << min;
	cout << endl << "Max number of array : " << max;
}