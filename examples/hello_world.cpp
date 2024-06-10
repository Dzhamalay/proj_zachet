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
{}

int main()
{
	std::cout<< "Please enter your name, i am asking you: ";
	string name;
	std::cin >> name;
        std::cout << "Hello World from Moscow" << name << std::endl;
        return 0;
}
