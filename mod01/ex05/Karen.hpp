#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
	public:
	void complain( std::string level );
	private:
	std::string word[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void none( void );
};

#endif
