#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
	static const int	_fractional_bits = 8;
	int					_nbr;

public:
	Fixed( void );
	Fixed( Fixed& original );
	Fixed( const int original );
	Fixed( const float original );
	~Fixed( void );

	Fixed& operator=(const Fixed& original);

	int		getRawBits( void )const;
	void	setRawBits( int const raw );
	float	toFloat( void )const;
	int		toInt( void )const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_point);

#endif