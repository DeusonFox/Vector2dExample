// Prak.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d x = { 10,10 };
	Vector2d y = { 20,20 };
	cout << "Вектор а = " << x.print << " Вектор b = " << y.print << endl;
	cout << "Скалярное произведение векторов a b";
	x.scalarmultiplication(y);
}
