#include <iostream>
#include <string>

class Point
{
private:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y)
	{}
};

class Point_3d: public Point
{
public:
	voit print()
	{
		std::cout << x << " " << y;
	}
}

int main()
{
	std::cout<< "Please enter your name, i am asking you: ";
	string name;
	std::cin >> name;
        std::cout << "Hello World from New York" << name << std::endl;
        return 0;
}
