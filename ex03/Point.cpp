#include "Point.hpp"

Point::~Point( void )
{

}

Point	Point::operator=(const Point& original)
{
	if (this == &original)
		return(*this);
	return (original);
}

const Fixed& Point::getX() const
{
	return _x;
}

const Fixed& Point::getY() const
{
	return _y;
}