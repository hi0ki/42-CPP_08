#include <iostream>

class test : public std::exception
{
	test()
	{std::cout << "teeest\n";}
	const char *what() const throw()
	{
		return "safdsfaf";
	}
};


int main()
{
	try
	{
		throw test();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}