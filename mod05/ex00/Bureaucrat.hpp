#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string const & name, unsigned int const grade);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat() {}

	Bureaucrat & operator = (Bureaucrat const &other);

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	void incrementGrade();
	void decrementGrade();
	std::string getName() const;
	unsigned int getGrade() const;
private:
	const std::string 	_name; // const ? how to make copy method
	unsigned int 		_grade;
};

std::ostream &	operator << (std::ostream &ost, Bureaucrat const &other);

#endif