﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int firstNum;
int secondNum;
int resultUser;
int realResult;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << endl << "Вводить числа нужно от 0 до 9" << endl;
    cout << endl << "Введите первое число" << endl;
    cin >> firstNum;
    cout << endl << "Введите второе число" << endl;
    cin >> secondNum;
    cout << endl << "Введите ваш ответ" << endl;
    cin >> resultUser;
    realResult = firstNum * secondNum;
    if (firstNum >=0 && firstNum <=9 && secondNum >=0 && secondNum <=9)
    {
        if (realResult == resultUser)
        {
            cout << endl << "Ваш ответ правильный!" << endl;
        }
        else {
            cout << endl << "Ваш ответ не правильный!" << endl << "Ваш ответ : " << resultUser << endl << "Правильный ответ : " << realResult;
        }
    }
    else {
        cout << endl << "Нужно вводить числа от 0 до 9." << endl;
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