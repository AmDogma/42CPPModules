#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	std::cout << "top " <<  mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size " << mstack.size() << std::endl;
	mstack.push(3); mstack.push(4); mstack.push(5);
	std::cout << "size " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "iterator = " << *it << std::endl;
	++it; 
	}

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite) {
		std::cout << "reverse iterator = " << *rit << std::endl;
	++rit; 
	}

	std::cout << "m top " <<  mstack.top() << std::endl;
	std::cout << "m size " << mstack.size() << std::endl;
	std::stack<int> s(mstack);
	std::cout << "s top " <<  s.top() << std::endl;
	std::cout << "s size " << s.size() << std::endl;
	return 0;
}