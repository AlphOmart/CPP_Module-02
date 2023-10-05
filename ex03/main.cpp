#include "Point.hpp"

int main( void )
{
	Point	a;
	Point const	b (2.09, 0.423);
	Point	c(b);

	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	std::cout << b.getX() << std::endl;
	std::cout << b.getY() << std::endl;
	std::cout << c.getX() << std::endl;
	std::cout << c.getY() << std::endl;

	return 0;
}