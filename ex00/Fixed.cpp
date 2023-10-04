#include "Fixed.hpp"

Fixed::Fixed( void )
{
	_nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed& original )
{
	_nbr = original._nbr;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (original == this)
		return (this);
	this->setRawBits(original.getRawBits());
	return (this);
}

int		getRawBits( void )const
{
	std::cout << "getRawBits member function called";
	return (this->_nbr);
}
void	setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}