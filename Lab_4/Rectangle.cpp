#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::Test() {
	cout << height;
}

void Rectangle::Fill() {
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < height; i++)
			tab[j][i] = 1;
	}
}
