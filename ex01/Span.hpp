#ifndef	SPAN_HPP
	#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> numbers;
		unsigned int N;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &obj);

		void addNumber(unsigned int num);
		int shortestSpan();
		int longestSpan();
		Span &operator=(const Span &obj);
		~Span();
};

#endif