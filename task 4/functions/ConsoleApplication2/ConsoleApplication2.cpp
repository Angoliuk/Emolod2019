#include <iostream>;
#include <time.h>;
#include <iomanip>;
#include <windows.h>


using namespace std;

int drawTriangle(int height, int width) {

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j < width * 2; j++)
        {
            if (i <= height * 2 && i >= height - j + 1 && j <= i + height - 1)
                cout << "^";
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
                cout << "#";
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
            cout << setw(2) << "~";
        }
        cout << endl;

    }
    return 0;
}

int drawFigure() {

    int figureType, height, width;

    cout << "What height of figure?" << endl;
    cin >> height;
    cout << "What width of figure?" << endl;
    cin >> width;
    cout << "Which figure you want to draw?(you may enter numbers from 2 to 99 and height may be bigger then width)" << endl << "1.Triangle" << endl << "2.Reverse triangle" << endl << "3.Right triangle" << endl;
    cin >> figureType;

    if (height > 2 || height < 99 || width > 2 || width < 99 || height >= width)
    {
        int** figure = new int* [width];
        for (int i = 0; i < width; i++)
        {
            figure[i] = new int[height];
        }

        switch (figureType)
        {
        case 1: {
            drawTriangle(width, height);
            break;
        }
        case 2: {
            drawReverseTriangle(width, height);
            break;
        }
        case 3: {
            drawRightTriangle(height);
            break;
        }
        default:
            cout << "Incorrect type of figure!";
            break;
        }

        for (int i = 0; i < width; i++)
        {
            delete[] figure[i];
        }

        return 0;
    }
    else
    {
        cout << "Error!";
    }
    }

int main()
{
    drawFigure();
}
