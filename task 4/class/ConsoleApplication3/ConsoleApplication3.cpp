
#include <iostream>
#include "Actions.h"

using namespace std;

int main()
{
    int width, height, actionType;
    cout << "Enter width of array" << endl;
    cin >> width;
    cout << "Enter height of array" << endl;
    cin >> height;

    Actions startAction;
    int** array = startAction.getArray(width, height);

    startAction.returnArray(array, width, height);

    cout << "What you want to do?" << endl << "1.First element" << endl << "2.Last element" << endl << "3.Lenght of array" << endl << "4.Reverse array" << endl;
    cin >> actionType;

    switch (actionType)
    {
    case 1:
        startAction.setFirstElement(array);
        break;
    case 2:
        startAction.setLastElement(array, width, height);
        break;
    case 3:
        startAction.setLength(array, width, height);
        break;
    case 4:
        //dont work
        startAction.reverseArray(array, width, height);
        startAction.returnArray(array, width, height);
        break;
    default:
        break;
    }
}

