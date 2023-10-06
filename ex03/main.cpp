#include "Point.hpp"

int main( void )
{
	Point	a(3, 1);
	Point	b(5, 2);
	Point	c(1, 7);


	Point	vec_ab(b - a);
	Point	vec_bc(c - b);
	Point	vec_ca(a - c);

	std::cout << "ax = " << a.getX() << std::endl;
	std::cout << "ay = " << a.getY() << std::endl;
	std::cout << "bx = " << b.getX() << std::endl;
	std::cout << "by = " << b.getY() << std::endl;
	std::cout << "cx = " << c.getX() << std::endl;
	std::cout << "cy = " << c.getY() << std::endl;
	std::cout << "vec_abx = " << vec_ab.getX() << std::endl;
	std::cout << "vec_aby = " << vec_ab.getY() << std::endl;
	std::cout << "vec_bcx = " << vec_bc.getX() << std::endl;
	std::cout << "vec_bcy = " << vec_bc.getY() << std::endl;
	std::cout << "vec_cax = " << vec_ca.getX() << std::endl;
	std::cout << "vec_cay = " << vec_ca.getY() << std::endl;

	return 0;
}