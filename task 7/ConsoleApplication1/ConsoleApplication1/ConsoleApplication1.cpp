
#include <iostream>
#include <array>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int size, typeOfReverse;

    cout << "Enter size of array :";
    cin >> size;
    vector<vector<int>> array(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[j][i] = rand() % 81 + 10;
            cout << setw(6) << array[j][i];
        }
        cout << endl;
    }
    cout << "Whic side you want to reverse?" << endl << "1.Right; 2.Left; 3.Axis;" << endl;
    cin >> typeOfReverse;
    cout << endl << endl;

    vector<vector<int>> newArray(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int n = size - (i + 1);
            int t = size - (j + 1);
            switch (typeOfReverse)
            {
            case 1:
                newArray[j][i] = array[i][t];
                break;
            case 2:
                newArray[j][i] = array[n][j];
                break;
            case 3:
                newArray[j][i] = array[j][n];
                break;
            default:
                break;
            }

            cout << setw(6) << newArray[j][i];
        }
        cout << endl;
    }
};