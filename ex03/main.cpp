#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(0.0, 0.0);
	Point b(1.0, 0.0);
	Point c(0.0, 1.0);
	Point d(0.972,0.002);

	if (bsp(a, b, c, d))
	{
		std::cout << "Le point d est à l'intérieur du triangle ABC." << std::endl;
	} else {
		std::cout << "Le point d n'est pas à l'intérieur du triangle ABC." << std::endl;
	}

	return 0;
}