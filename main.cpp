#include <iostream>
#include <vector>
class test : public std::exception
{
	test()
	{
		std::cout << "teeest\n";
	}
	
	const char *what() const throw()
	{
		return "safdsfaf";
	}
};


int main()
{
	std::vector<int> v;

	v.push_back(7);
	v.push_back(1);
	v.push_back(20);
	v.push_back(10);
	v.push_back(15);
	v.push_back(17);

	std::sort(v.begin() + 1, v.end() - 1);

	std::cout << "Sorted vector: ";
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
}
