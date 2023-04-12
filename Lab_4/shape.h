
class Shape {
protected:
	int height;
	int width;
	string color;
	char symbol;

	int** tab;

	int x, y;
public:
	void printShape();
	virtual void Fill() = 0;


	Shape(int h, char s, string c);

	~Shape();
	friend class Forest;
};
