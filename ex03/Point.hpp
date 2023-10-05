#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed _y;

public:
	Point( void ) : _x(0), _y(0) {};
	Point( float const x,  float const y): _x(x), _y(y) {};
	Point(const Point &original) : _x(original.getX()), _y(original.getY()){};

	~Point();

	Point			operator=(const Point& original);

	const Fixed&	getX( void ) const;
	const Fixed&	getY( void ) const;
};
