#include "Tree.h"


class Forest {
private:
	int H, W;
	vector <Tree *> trees;
	int** tab;
public:

	Forest(int H, int W); //konstruktor jest bez typu 
	~Forest();
	void AddTree(int h, char s, string c, int y, int x);

	void PrintForest();
};
