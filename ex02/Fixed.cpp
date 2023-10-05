#include "Fixed.hpp"

Fixed::Fixed( void )
{
	_nbr = 0;
}

Fixed::Fixed( const Fixed& original )
{
	this->operator=(original);
}

Fixed::Fixed( const int nbr )
{
	_nbr = nbr * (1 << this->_fractional_bits);
}

Fixed::Fixed(const float nb)
{
		_nbr = roundf(nb * (1 << this->_fractional_bits));
}
Fixed::~Fixed( void )
{
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	if (this == &original)
		return (*this);
	this->setRawBits(original.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (this->_nbr <= other._nbr)
		return (false);
	return (true);
}

bool	Fixed::operator<(const Fixed& other) const
{
	if (other._nbr <= this->_nbr)
		return (false);
	return (true);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	if (this->_nbr < other._nbr)
		return (false);
	return (true);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	if (other._nbr < this->_nbr)
		return (false);
	return (true);
}

bool	Fixed::operator==(const Fixed& other) const
{
	if (this->_nbr == other._nbr)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	if (this->_nbr != other._nbr)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator--( void )
{
	this->_nbr -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old(*this);

	this->operator--();
	return (old);
}

Fixed&	Fixed::operator++( void )
{
	this->_nbr += 1;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	this->operator++();
	return (old);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_nbr);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_nbr/ (1 << this->_fractional_bits);
}

int		Fixed::toInt( void ) const
{
	return (this->_nbr >> this->_fractional_bits);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.operator<=(b))
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.operator<=(b))
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.operator<=(b))
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.operator<=(b))
		return (b);
	return (a);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_point)
{
	os << fixed_point.toFloat();
	return os;
}
