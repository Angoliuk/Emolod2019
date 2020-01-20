// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <ctime>
#include <iomanip>

int main()
{
    srand(time(0));

    const unsigned int lengthArr = 3;
    int arrayOne[lengthArr][lengthArr];
    int arrayTwo[lengthArr][lengthArr];
    int useRand;
    bool randBool;
    string action;

    cout << "Use random numbers?" << endl << "1.Yes" << endl << "2.No" << endl ;
    cin >> useRand;

    switch (useRand)
    {

    case 1:;
        randBool = true;
        break;

    case 2:;
        randBool = false;
        break;

    default:
        cout << "Oops!";
        break;
    }

    if (randBool == true)
    {

        for (int i = 0; i < lengthArr; i++) {
            for (int j = 0; j < lengthArr; j++) {
                arrayOne[i][j] = rand()%98 +1;
            }
        } 

        for (int i = 0; i < lengthArr; i++) {
            for (int j = 0; j < lengthArr; j++) {
                arrayTwo[i][j] = rand()%98+1;
            }
        }

    }
    else {

        cout << "You may enter numbers from 1 to 99 , else program will be reseted" << endl;
        for (int i = 0; i < lengthArr; i++) {
            for (int j = 0; j < lengthArr; j++) {
                cout << "Enter number to first array [" << i << "]" << "[" << j << "]";
                cout << endl;
                cin >> arrayOne[i][j];
                if (arrayOne[i][j] > 99 || arrayOne[i][j] < 1)
                {
                    cout << endl << endl << "Restart! You enter wrong number!" << endl;
                    exit(main());
                }

            }
        }

        for (int i = 0; i < lengthArr; i++) {
            for (int j = 0; j < lengthArr; j++) {
                cout << "Enter number to second array [" << i << "]" << "[" << j << "]";
                cout << endl;
                cin >> arrayTwo[i][j];
                if (arrayOne[i][j] > 99 || arrayOne[i][j] < 1)
                {
                    cout << endl << endl << "Restart! You enter wrong number!" << endl;
                    exit(main());
                }
            }
        }
    }

    cout << endl << "What you want to do? (|+|-|*|/|)" << endl;

    cin >> action;

    for (int i = 0; i < lengthArr; i++) {
        for (int j = 0; j < lengthArr; j++) {
            cout << setw(6) << arrayOne[i][j];
        }
        cout << endl;
    }

    cout << endl << action << endl << endl;

    for (int i = 0; i < lengthArr; i++) {
        for (int j = 0; j < lengthArr; j++) {
            cout << setw(6) << arrayTwo[i][j];
        }
        cout << endl;
    }
    cout << endl << "=" << endl;

    for (int i = 0; i < lengthArr; i++) {
        for (int j = 0; j < lengthArr; j++) {
            if (action == "+")
            {
                cout << setw(6) << arrayOne[i][j] + arrayTwo[i][j];
            }
            else if (action == "-")
            {
                cout << setw(6) << arrayOne[i][j] - arrayTwo[i][j];
            }
            else if (action == "/")
            {
                cout << setw(6) << arrayOne[i][j] / arrayTwo[i][j];
            }
            else if(action == "*"){
                cout << setw(6) << arrayOne[i][j] * arrayTwo[i][j];
            }
            else {
                cout << endl << endl << "Restart! Unknown sign!" << endl;
                exit(main());
            }
        }
        cout << endl;
    }
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
