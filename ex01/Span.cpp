#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
	std::cout << "Constructor called!!" << std::endl;
}

Span::Span(const Span &obj)
{
	std::cout << "coppy constructor called!!" << std::endl;
	*this = obj;
}

void Span::addNumber(unsigned int num)
{
	if (this->numbers.size() < this->N)
		numbers.push_back(num);
	else
		throw std::runtime_error("Span is full, cannot add more numbers.");
}

int Span::shortestSpan()
{}
int Span::longestSpan()
{
	std::sort 
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
