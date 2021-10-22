#include "All.hpp"

All::All() : inf_p(0), inf_m(0), ch_t(0), nan(0), value(0), zero(0) {}

All::All(std::string arg) : inf_p(0), inf_m(0), ch_t(0), nan(0), value(0.0f), zero(0) {
	if (arg == "nan" || arg == "nanf")
		nan = true;
	else if (arg == "+inff" || arg == "+inf")
		inf_p = true;
	else if (arg == "-inff" || arg == "-inf")
		inf_m = true;
	else if (arg.length() == 1 && !(isdigit(*(arg.c_str()))) && isprint(*(arg.c_str())))
	{
		ch_t = true;
		value = static_cast<double>(*(arg.c_str()));
	}
	else {
		if (atof(arg.c_str()) - atoi(arg.c_str()) == 0.0f)
			zero = true;
		value = strtod(arg.c_str(), NULL);
	}
}

void All::toInt()
{
	std::cout << "Int: ";
	if (nan || inf_p || inf_m || value > INT_MAX || value < INT_MIN || ch_t)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void All::toFloat()
{
	float	f = static_cast<float>(value);

	std::cout << "float: ";
	if (value > __FLT_MAX__ || value < -__FLT_MAX__ || ch_t)
		std::cout << "Impossible" << std::endl;
	else if (nan)
		std::cout << "nanf" << std::endl;
	else if (inf_p)
		std::cout << "+inff" << std::endl;
	else if (inf_m)
		std::cout << "-inff" << std::endl;
	else
	{
		std::cout << f;
		if (zero)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
}	

void All::toDouble()
{
	std::cout << "double: ";
	if (ch_t)
		std::cout << "Impossible" << std::endl;
	else if (nan)
		std::cout << "nan" << std::endl;
	else if (inf_p)
		std::cout << "+inf" << std::endl;
	else if (inf_m)
		std::cout << "-inf" << std::endl;
	else
	{
		std::cout << value;
		if (zero)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
}

void All::toChar()
{
	char	c = static_cast<char>(value);

	std::cout << "char: ";
	if (nan || inf_p || inf_m || value > 127 || value < 0)
		std::cout << "Impossible" << std::endl;
	else if (ch_t || isprint(value))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void All::printAll()
{
	toChar();
	toInt();
	toFloat();
	toDouble();
}

All::All(All const &other) {
	*this = other;
}

All & All::operator = (All const &other) {
	inf_p = other.inf_p;
	inf_m = other.inf_m;
	ch_t = other.ch_t;
	nan = other.nan;
	value = other.value;
	zero = other.zero;
	return *this;
}
