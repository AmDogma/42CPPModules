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
	int					point;
	static const int	value = 12345678;

};