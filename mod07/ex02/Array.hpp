#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T	*ptr;
	int len;
public:
	Array() : ptr(NULL), len(0) {}

	Array(int const num) {
		if (num < 1)
			throw OutOfArrayExeption();
		else {
			this->ptr = new T[num];
			this->len = num;
		}
	}

	Array(Array const &other) : ptr(new T[other.len]), len(other.len) {
	for (int i = 0; i < other.len; i++)
		this->ptr[i] = other.ptr[i];
	}

	~Array() {
		if (this->ptr)
			delete [] this->ptr;
	}

	class OutOfArrayExeption: public std::exception {
		public:
			const char *what() const throw() {
				return "Out of array!";
			}
	};

	Array & operator = (Array const &other) {
		if (this->ptr)
			delete [] this->ptr;
		this->ptr = new T[other.len];
		this->len = other.len;
		for (int i = 0; i < other.len; i++)
			this->ptr[i] = other.ptr[i];
		return *this;
	}

	T & operator [] (int const num) {
		if (num < 0 || num > this->len - 1)
			throw OutOfArrayExeption();
		return ptr[num];
	}

	int size() {
		return this->len;
	}

	T* getArray() {
		return this->ptr;
	}
};

#endif