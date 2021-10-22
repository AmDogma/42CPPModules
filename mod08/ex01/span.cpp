#include "span.hpp"

Span::Span(unsigned int n) :  _size(n), _curr(0) {}

Span::Span(Span const &other) : _array(other.getArray()), _size(other.getSize()), _curr(other.getCurr()){}

Span::~Span() {}

Span & Span::operator = (Span const &other) {
	_size = other.getSize();
	_curr = other.getCurr();
	_array = other.getArray();
	return *this;
}

void Span::addNumber (unsigned int num){
	if (_curr < _size)
		_array.push_back(num);
	else 
		throw FullException();
	_curr++;
}

void Span::addRange (unsigned int begNum, unsigned int endNum) {
	if (begNum < endNum && _curr < _size) {
		for (unsigned int i = 0; i < endNum - begNum + 1 && _curr < _size; i++) {
			_array.push_back(begNum + i);
			_curr++;
		}
	
		
	}
}

void Span::addIterator (Span::iterator beg, iterator end) {
		for (unsigned int i = 0; beg < end; i++) {
			if (i >  _size - _curr)
				throw FullException();
			else
				beg++;
		}
		_array.insert(beg, end);
}

unsigned int Span::shortestSpan (){
	if (_curr < 2)
		throw EmptyException();
	unsigned int res = UINT_MAX;
	unsigned int calc = 0;
	for (unsigned int i1 = 0; i1 < _array.size(); i1++) {
		for (unsigned int i = 0; i < _array.size(); i++) {
			if (i == i1 || _array[i1] < _array[i])
				continue;
			calc = _array[i1] - _array[i];
			if (res > calc)
				res = calc;
		}
	}
	return res;
}

unsigned int  Span::longestSpan (){
	if (_curr < 2)
		throw EmptyException();
	unsigned int res = 0;
	unsigned int calc = 0;
	for (unsigned int i1 = 0; i1 < _array.size(); i1++) {
		for (unsigned int i = 0; i < _array.size(); i++) {
			if (i == i1 || _array[i1] < _array[i])
				continue;
			calc = _array[i1] - _array[i];
			if (res < calc)
				res = calc;
		}
	}
	return res;
}

const std::vector<int> Span::getArray() const {
	return _array;
}

unsigned int Span::getSize() const {
	return _size;
}

unsigned int Span::getCurr() const {
	return _curr;
}

const char *Span::FullException::what() const throw() {
		return "Array full!";
	}

const char *Span::EmptyException::what() const throw() {
		return "Empty or only 1 value array!";
	}