#include "Point.hpp"

Point::~Point( void )
{

}

Point	Point::operator=(const Point& original) const
{
	if (this == &original)
		return(*this);
	return (original);
}

Point	Point::operator-(const Point& other) const
{
	Point tmp(this->_x.toFloat() - other._x.toFloat(), this->_y.toFloat() -  other._y.toFloat());
	return (tmp);
}

const Fixed& Point::getX() const
{
	return _x;
}

const Fixed& Point::getY() const
{
	return _y;
}