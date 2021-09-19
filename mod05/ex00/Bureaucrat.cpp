#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("defaultBureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const & name, unsigned int const grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other.getName()), _grade(other.getGrade())  {
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const &other) {
	this->_grade = other._grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return _name;
}

unsigned int Bureaucrat::getGrade() const {
	return _grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too hight!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

void Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;

}

void Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

std::ostream &	operator << (std::ostream &ost, Bureaucrat const &other) {
	ost << other.getName() << ", bureaucrat grade " << other.getGrade();
	return ost;
}
