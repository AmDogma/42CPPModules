#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <iostream>

class NoException : public std::exception {
public:
	virtual const char *what() const throw() {
		return "can't find";
	}
};

template <typename T>
typename T::const_iterator easyfind(int num, T &cont)
{
	typename T::const_iterator res;
	res = std::find(cont.begin(), cont.end(), num);
	if (res == cont.end() && *res != num)
		throw NoException();
	return res;
}

#endif