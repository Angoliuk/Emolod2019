// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{

	setlocale(LC_ALL, "Russian");
	int chooseAction;
	bool useModule;
	int moduleMode;
	float firstNum;
	float secondNum;
	float result;
	string action;


	cout << endl << "1. Использовать модуль" << endl;
	cout << endl << "2. Не использовать модуль" << endl;
	cout << endl << "Что ты выберешь?" << endl;
	cin >> moduleMode;


	switch (moduleMode)
	{
	case 1:
		useModule = true;
		break;
	case 2:
		useModule = false;
		break;
	default:
		useModule = false;
		break;
	}


	cout << endl << "1. добавление" << endl;
	cout << endl << "2. отнимание" << endl;
	cout << endl << "3. умножение" << endl;
	cout << endl << "4. деление" << endl;
	cout << endl << "5. квадрат числа" << endl;
	cout << endl << "6. корень числа" << endl;
	cout << endl << "Какое действие произвести?" << endl;
	cin >> chooseAction;


	if (chooseAction<=4)
	{
		cout << endl << "Enter first number" << endl;
		cin >> firstNum;
		cout << endl << "Enter second number" << endl;
		cin >> secondNum;
	}
	else {
		cout << "Enter number" << endl;
		cin >> firstNum;
	}


	if (useModule == true)
	{
		switch (chooseAction)
		{
		case 1:
			result = abs(firstNum + secondNum);
			action = "+";
			break;
		case 2:
			result = abs(firstNum - secondNum);
			action = "-";
			break;
		case 3:
			result = abs(firstNum * secondNum);
			action = "*";
			break;
		case 4:
			if (secondNum != 0)
			{
				result = abs(firstNum / secondNum);
				action = "/";
			}
			else
			{
				action = "/";
			}
			break;
		case 5:
			result = pow(firstNum, 2);
			action = "^";
			break;
		case 6:
			result = sqrt(abs(firstNum));
			action = "корень числа";
			break;
		default:
			break;
		}
	}
	else {
		switch (chooseAction)
		{
		case 1:
			result = firstNum + secondNum;
			action = "+";
			break;
		case 2:
			result = firstNum - secondNum;
			action = "-";
			break;
		case 3:
			result = firstNum * secondNum;
			action = "*";
			break;
		case 4:
			if (secondNum!=0)
			{
				result = firstNum / secondNum;
				action = "/";
			}
			else
			{
				action = "/";
			}
			break;
		case 5:
			result = pow(firstNum, 2);
			action = "^";
			break;
		case 6:
			if (firstNum > -1)
			{
				
				result = sqrt(firstNum);
				action = "корень числа";
			}
			else
			{
				action = "корень числа";
			}
			break;
		default:
			break;
		}
	}

 if (action == "-"|| action == "+"|| action == "*")
	{
		cout << endl << "Ваше действие : " << action << endl << "Ваше задание : " << firstNum << action << secondNum << " = " << result << endl;
	}
 else  if (action == "/")
 {
	 if (secondNum==0)
	 {
		 cout << endl << "Нельзя делить на 0; Пожайлуста , измените числа!";
	 }
	 else {
		 cout << endl << "Ваше действие : " << action << endl << "Ваше задание : " << firstNum << action << secondNum << " = " << result << endl;
	 }
 }
	else  if (action=="корень числа")
	{
	 if (useModule == true)
	 {
		 cout << endl << "Ваше действие : " << action << endl << "Ваше задание : " << action << "(" << firstNum << ")" << " = " << result << endl;
	 }
	 else if(firstNum >= 0){
		 cout << endl << "Ваше действие : " << action << endl << "Ваше задание : " << action << "(" << firstNum << ")" << " = " << result << endl;
	 }
	 else
	 {
		 cout << endl << "Нельзя получить корень данного числа , потому что число меньше 0";
	 }
	 
	}
	else if(action == "^")
	{
		cout << endl << "Ваше действие : " << action << endl << "Ваше задание : " << firstNum << action << "2" << " = " << result;
	}
	
};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
