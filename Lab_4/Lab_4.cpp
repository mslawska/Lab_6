// Lab_4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

#include "Forest.h"
#include "shape.h"
#include "Rectangle.h"

int main()
{
    int i, j;
    //Tree drzewko(5, '*', "green");
    //drzewko.printTree();
   /* Forest las = Forest(15, 60);

    las.AddTree(5, '*', "green", 1, 1);
    las.AddTree(8, '#', "red", 3, 20);
    las.AddTree(10, '*', "yellow", 5, 25);

       /* for (j = 0; j < las.H; j++) {
            for (i = 0; i < las.W; i++)
                cout << las.tab[j][i];
            cout << endl; */
        
    Shape s(5, '*', "green");
    Rectangle p(5, '*', "green");
    p.Test();
    p.Fill();
    p.printShape();

       // las.PrintForest();
}



/* cout << "\033[1;31m 00000 \033[0m \n";
 cout << "\033[1;32m 00000  \033[0m \n";
 cout << "\033[1;33m 00000 \033[0m \n";
 cout << "\033[1;34m 00000 \033[0m \n";
 cout << "\033[1;35m 00000 \033[0m \n";
 cout << "\033[1;36m 00000 \033[0m \n"; 


}*/

