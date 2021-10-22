#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
private:
	std::vector<int>	_array;
	unsigned int		_size;
	unsigned int		_curr;
	Span() {};
public:
	Span(unsigned int n);
	Span(Span const &other);
	~Span();

	Span & operator = (Span const &other);

	class FullException : public std::exception {
	public:
	virtual const char *what() const throw();
	};

	class EmptyException : public std::exception {
	public:
	virtual const char *what() const throw();
	};

	void addNumber (unsigned int num);
	void addRange (unsigned int begNum, unsigned int endNum);
	void addIterator (std::iterator beg, iterator end);
	unsigned int shortestSpan ();
	unsigned int longestSpan ();
	const  std::vector<int> getArray() const ;
	unsigned int getSize() const;
	unsigned int getCurr() const;

};

#endif