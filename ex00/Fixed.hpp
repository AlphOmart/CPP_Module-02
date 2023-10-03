

class Fixed
{
private:
	static const int	_fractional_bits = 8;
	int					_nbr;

public:
	Fixed();
	Fixed(Fixed& original);

	Fixed& operator=(const Fixed& original);

	~Fixed();
	void	getRawBits( void )const;
	void	setRawBits( int const raw );

};