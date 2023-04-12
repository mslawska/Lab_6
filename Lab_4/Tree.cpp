#include <iostream>
using namespace std;

#include "Tree.h"

void Tree::printTree() {
	int i, j;

	cout << color;

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i > 0; i--)
			cout << ' ';

		for (i = 0; i < 2 * j; i++)
			cout << symbol;

		cout << endl;


	}
	cout << "\033[0m";
}

Tree::Tree(int h, char s, string c)
{
	int i, j;
	height = h;
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

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
	}
}

Tree::~Tree()
{
	int j;
	cout << "kasuje drzewo\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;
}