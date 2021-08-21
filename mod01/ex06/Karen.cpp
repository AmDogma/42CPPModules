#include "Karen.hpp"

void Karen::complain( std::string level ){
	int i;
	bool yes;
	std::string word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*funcptr[5])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::none};

	i = 0;
	yes = false;
	while(i < 4) {
		if (word[i] == level || yes) {
			(this->*funcptr[i])();
			yes = true;
		}	
		i++;
	}	
	if (!yes)
		(this->*funcptr[i])();
}

void Karen::none( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}

void Karen::debug( void ) {
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}
void Karen::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}
void Karen::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}
void Karen::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
