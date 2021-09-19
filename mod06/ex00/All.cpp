#include "All.hpp"


All::All() : inf_p(false), inf_m(false), length(0), nan(0), value(0), zero(0) {}

All::All(std::string arg) : inf_p(false), inf_m(false), length(0), nan(0), value(0.0f), zero(0) {
	if (arg == "nan" || arg == "nanf")
		nan = true;
	else if (arg == "+inff" || arg == "+inf")
		inf_p = true;
	else if (arg == "-inff" || arg == "-inf")
		inf_m = true;
	else if (arg == "0")
		zero = true;
	else if (arg.length() == 1 && isdigit(atof(arg.c_str())))
	else {
		length = arg.length();
		value = atof(arg.c_str());
		if (value)
	}


}