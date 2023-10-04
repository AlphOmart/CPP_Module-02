#include "Fixed.hpp"

Fixed::Fixed( void )
{
	_nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed& original )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(original);
}

Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	_nbr = nbr * (1 << this->_fractional_bits);
}

Fixed::Fixed(const float nb):
		_nbr(roundf(nb * (1 << this->_fractional_bits))) {
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&original == this)
		return (*this);
	this->setRawBits(original.getRawBits());
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_nbr);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}

float	Fixed::toFloat(void) const {
	return (float)this->_nbr/ (1 << this->_fractional_bits);
}

int		Fixed::toInt( void ) const
{
	return (this->_nbr >> this->_fractional_bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_point)
{
	os << fixed_point.toFloat();
	return os;
}
