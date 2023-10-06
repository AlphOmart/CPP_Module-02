#include "Point.hpp"

bool	higher_than_0(Fixed& a, Fixed& b, Fixed& c);
bool	lower_than_0(Fixed& a, Fixed& b, Fixed& c);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	side_1(b - a);
	Point	side_2(c - b);
	Point	side_3(a - c);

	Point	vec_1(point - a);
	Point	vec_2(point - b);
	Point	vec_3(point - c);

	Fixed	prod_1((side_1.getX().toFloat() * vec_1.getY().toFloat()) - (vec_1.getX().toFloat() * side_1.getY().toFloat()));
	Fixed	prod_2((side_2.getX().toFloat() * vec_2.getY().toFloat()) - (vec_2.getX().toFloat() * side_2.getY().toFloat()));
	Fixed	prod_3((side_3.getX().toFloat() * vec_3.getY().toFloat()) - (vec_3.getX().toFloat() * side_3.getY().toFloat()));

	if ( lower_than_0(prod_1, prod_2, prod_3) || higher_than_0(prod_1, prod_2, prod_3))
		return (true);
	return (false);

}

bool	higher_than_0(Fixed& a, Fixed& b, Fixed& c)
{
	if (a.operator>(0) && b.operator>(0) && c.operator>(0))
		return (true);
	return (false);
}

bool	lower_than_0(Fixed& a, Fixed& b, Fixed& c)
{
	if (a.operator<(0) && b.operator<(0) && c.operator<(0))
		return (true);
	return (false);
}