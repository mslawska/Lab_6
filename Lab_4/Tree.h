
class Tree {
private:
	int height;
	int width;
	string color;
	char symbol;

	int** tab;

	int x, y;
public:
	void printTree();
	

	Tree(int h, char s, string c);

	~Tree();
	friend class Forest;
};
