
#include <iostream>
#include "Actions.h"
#include <array>
#include <vector>

using namespace std;

int main()
{
    int width, height, actionType;
    cout << "Enter width of array" << endl;
    cin >> width;
    cout << "Enter height of array" << endl;
    cin >> height;

    Actions startAction;

    srand(time(0));

    vector<vector<int>> array(width,vector<int>(height));

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            array[j][i] = rand() % 99; 
            cout << setw(4) << array[j][i];
        }
        cout << endl;
    }

    cout << "What you want to do?" << endl << "1.First element" << endl << "2.Last element" << endl << "3.Lenght of array" << endl << "4.Reverse array" << endl;
    cin >> actionType;
    switch (actionType)
    {
    case 1:
        startAction.getFirstElement(array);
        break;
    case 2:
        startAction.getLastElement(array);
        break;
    case 3:
        startAction.getLength(array);
        break;
    case 4:
        //dont work
        startAction.reverseArray(array, width, height);
        break;
    default:
        break;
    }
}

