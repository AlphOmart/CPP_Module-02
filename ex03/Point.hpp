#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed _y;

public:
	Point( void );
	Point( float const x,  float const y);
	Point(const Point &original);

	~Point();

	Point			operator=(const Point& original)const ;
	Point			operator-(const Point& original)const ;
	const Fixed&	getX( void ) const;
	const Fixed&	getY( void ) const;
};
#endif