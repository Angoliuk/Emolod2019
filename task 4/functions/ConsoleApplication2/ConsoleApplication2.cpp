#include <iostream>;
#include <time.h>;
#include <iomanip>;
#include <windows.h>


using namespace std;

int* figureSize() {

    int height, width;

    cout << "What height of figure?" << endl;
    cin >> height;
    cout << "What width of figure?" << endl;
    cin >> width;



    int paramOfFigure[2] = {
        width,height
    };

    return paramOfFigure;

}
int** createArray(int width, int height) {

    int** figure = new int* [width];
    for (int i = 0; i < width; i++)
    {
        figure[i] = new int[height];
    }
    return figure;
}

int drawFigure() {

    int figureType;
    int* size = figureSize();

    cout << "Which figure you want to draw?" << endl << "1.Triangle" << endl << "2.Reverse triangle" << endl << "3.Right triangle";
    cin >> figureType;

    createArray(size[1], size[2]);

    switch (figureType)
    {
    case 1: {
        drawTriangle(size[1], size[2]);
        break;
    }
    case 2: {
         drawReverseTriangle(size[1], size[2]);
        break;
    }
    case 3: {
         drawRightTriangle(size[2]);
        break;
    }
    default:
        cout << "Incorrect type of figure!";
        break;
    }

    int** figure = createArray(size[1], size[2]);
    for (int i = 0; i < size[1]; i++)
    {
        delete[] figure[i];
    }

    return 0;
}

int drawTriangle(int height, int width) {

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j < width * 2; j++)
        {
            if (i <= height * 2 && i >= height - j + 1 && j <= i + height - 1)
                cout << "|";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

int drawReverseTriangle(int height, int width) {

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j < width * 2; j++)
        {
            if (j >= i && j <= 2 * height - i)
                cout << "|";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

int drawRightTriangle(int height) {

    for (int i = -1; i < height; i++)
    {
        for (int j = -1; j < i; j++)
        {
            cout << setw(2) << "*";
        }
        cout << endl;

    }
    return 0;
}

int main()
{
    drawFigure();
}
