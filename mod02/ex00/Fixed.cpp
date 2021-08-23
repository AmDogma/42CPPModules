#include "Fixed.hpp"

Fixed::Fixed () : point(0) {
	std::cout << "Default constuctor    " << this << std::endl;
}

Fixed::Fixed(const Fixed &other ) {
	this->point = other.point;
	std::cout << "Copy constuctor       " << this << std::endl;
}
	

int	Fixed::getRawBits( void )  const {
	std::cout << "GetRawBits            " << this << std::endl;
	return point;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "SetRawBits   " << this << std::endl;
	point = raw;
}

Fixed &	Fixed::operator = ( Fixed &other ) {
	std::cout << "Opertor =             " << this << std::endl;
	this->point = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor            " << this << std::endl;
}