#pragma once
#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	Fixed &	operator = (Fixed &other);

private:
	int					value;
	static const int	fixed = 8;

};