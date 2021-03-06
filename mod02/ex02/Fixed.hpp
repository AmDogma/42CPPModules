#pragma once
#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed ();
	Fixed ( int const valueInt );
	Fixed ( const Fixed &other );
	Fixed ( float const valueFloat );
	~Fixed();

	int		toInt ( void ) const;
	float	toFloat ( void ) const;
	int		getRawBits ( void ) const;
	void	setRawBits ( int const raw );
	
	static Fixed &	max ( Fixed &a, Fixed &b);
	static Fixed &	min ( Fixed &a, Fixed &b);
	static Fixed const & max ( Fixed const &a, Fixed const &b);
	static Fixed const & min ( Fixed const &a, Fixed const &b);
	
	Fixed	operator -- (int);
	Fixed	operator ++ (int);
	Fixed &	operator -- (void);
	Fixed &	operator ++ (void);
	Fixed &	operator = (Fixed const &other);
	Fixed	operator + (Fixed const &other) const;
	Fixed	operator - (Fixed const &other) const;
	Fixed	operator * (Fixed const &other) const;
	Fixed	operator / (Fixed const &other) const;
	bool	operator > (Fixed const &other) const;
	bool	operator < (Fixed const &other) const;
	bool	operator != (Fixed const &other) const;
	bool	operator == (Fixed const &other) const;
	bool	operator >= (Fixed const &other) const;
	bool	operator <= (Fixed const &other) const;

private:
	int					value;
	static const int	fixed = 8;

};

std::ostream &	operator << ( std::ostream &ost, Fixed const &other );