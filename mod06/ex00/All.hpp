#ifndef ALL_HPP
#define ALL_HPP

#include <iostream>
#include <cstdlib>
#include <limits>


class All
{
public:

	All();
	All(std::string arg);
	All(All const &other);
	~All() {}

	All & operator = (All const &other);

	void printAll();
	void toChar();
	void toInt();
	void toFloat();
	void toDouble();

	bool 	inf_p;
	bool 	inf_m;
	bool 	ch_t;
	bool 	nan;
	double	value;
	bool 	zero;

}; 

#endif
