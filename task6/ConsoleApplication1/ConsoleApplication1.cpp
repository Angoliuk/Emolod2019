// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "TypeOfNature.h"
#include "Animal.h"
#include "Plant.h"
#include "Human.h"
#include "ShrubbyPlant.h"
#include "WoodyPlant.h"
#include "OmnivorousAnimal.h"
#include "CarnivorousAnimal.h"
#include "HebivoresAnimal.h"
#include "HerbalPlant.h"


using namespace std;

int main()
{
	Herbal wheat;
	wheat.setCerealPlant();
	Animal bear;
	bear.setEnableFur();
	Human nick;
	nick.setAge();
	Description elf;
	elf.setDanger();
	elf.getDanger();
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
