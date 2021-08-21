#include "Karen.hpp"

void Karen::complain( std::string level ){
	int i;
	std::string word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while(i < 4 && word[i] != level)
		i++;
	switch (i)
    {
    case 0:
        debug();
        std::cout << std::endl;
    case 1:
        info();
        std::cout << std::endl;
    case 2:
        warning();
        std::cout << std::endl;
    case 3:
        error();
        std::cout << std::endl;
        break ;
    default:
        none();
        std::cout << std::endl;
    }
}

void Karen::none( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::debug( void ) {
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}
