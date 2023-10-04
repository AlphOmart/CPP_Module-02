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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}
void	Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}