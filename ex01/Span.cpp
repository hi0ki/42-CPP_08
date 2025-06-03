#include "Span.hpp"

Span::Span(unsigned int N)
{
	// this->N = N;
}

Span::Span(const Span &obj)
{
	std::cout << "coppy constructor called!!" << std::endl;
	*this = obj;
}

void Span::addNumber(unsigned int num)
{
	N.push_back(num);
}


Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->N = obj.N;
	}
	std::cout << "assignation operator called!!" << std::endl;
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called!!" << std::endl;
}
