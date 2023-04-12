#include <iostream>
using namespace std;

#include "shape.h"

void Shape::printShape() {
	int i, j;

	cout << color;
	Fill();

	for (j = 0; j < height; j++)
	{
	

		for (i = 0; i < 2 * j; i++)
			if (tab[j][i]) {
				cout << symbol;
				cout << color;
			}
			else cout << " ";

		cout << endl;


	}
	cout << "\033[0m";
}

Shape::Shape(int h, char s, string c)
{
	int i, j;
	height = h;
	//to do
	width = 2 * h - 1;
	symbol = s;

	if (c == "green") color = "\033[1;32m";
	if (c == "red") color = "\033[1;31m";
	if (c == "yellow") color = "\033[1;33m";

	tab = new int* [height];

	for (j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (i = 0; i < width; i++)
			tab[j][i] = 0;
	}
	//Fill();
	
}
/*
void Shape::Fill() {
	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
	}
}*/

Shape::~Shape()
{
	int j;
	cout << "kasuje drzewo\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;

	cout << "destruktor shape\n";
}