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