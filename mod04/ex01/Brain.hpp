#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>

class Brain {
public:
	Brain();
	Brain(Brain &other);
	~Brain();
	Brain & operator = (Brain const &other);

	std::string getIdeas (int i) const;

protected:
	std::string ideas[100];
};

#endif