#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("defaultShrubberyCreationForm", 145, 137), _target("defaultTarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Shrubbery " + target, 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : _target(other.getTarget()){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const &other) {
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const  {
	if (this->getGradeExecute() < executor.getGrade())
		throw GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw FormIsNotSigned();
	else {
	std::ofstream outfile(_target + "_shrubbery");
	if (!outfile.is_open()) {
		std::cout << "Failed to create new file!" << std::endl;
		return;
	}
	outfile << "       _-_" << std::endl
	<< "    /~~   ~~\\ " << std::endl
	<< " /~~         ~~\\ " << std::endl
	<< "{               }" << std::endl
	<< " \\  _-     -_  /" << std::endl
	<< "   ~  \\\\ //  ~" << std::endl
	<< "_- -   | | _- _" << std::endl
	<< "  _ -  | |   -_" << std::endl
	<< "      // \\\\" << std::endl;
	outfile.close();
	}
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

std::ostream &	operator << (std::ostream &ost, ShrubberyCreationForm const &other) {
	ost << other.getName() << " ShrubberyCreationForm. GradeSign = " << other.getGradeSign() << ". GradeExecute = " << other.getGradeExecute() << ". Is signed = " << other.getIsSigned();
	return ost;
}
