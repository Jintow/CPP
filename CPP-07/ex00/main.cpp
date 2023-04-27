//
// Created by Johan Litaudon on 4/27/23.
//

#include <iostream>
#include "whatever.hpp"

int main(void)
{
	int a = 21;
	int b = 42;

	std::cout << "Min of a and b is '" << min<int>(a,b) << "'" << std::endl; // explicit
	std::cout << "Max of a and b is '" << max(a,b) << "'" << std::endl; // implicit
	swap(a, b);
	std::cout << "After swap, a is '" << a << "' and b is '" << b << "'" << std::endl;

	float af = 10.002f;
	float bf = 36.489;

	std::cout << "Min of af and bf is '" << min<float>(af,bf) << "'" << std::endl; // explicit
	std::cout << "Max of af and bf is '" << max(af,bf) << "'" << std::endl; // implicit
	swap(af, bf);
	std::cout << "After swap, af is '" << af << "' and bf is '" << bf << "'" << std::endl;

	std::string s1 = "salut";
	std::string s2 = "Iaorana";

	std::cout << "Min of s1 and s2 is '" << min<std::string>((s1),(s2)) << "'" << std::endl; // explicit
	std::cout << "Max of s1 and s2 is '" << max(s1,s2) << "'" << std::endl; // implicit
	swap(s1, s2);
	std::cout << "After swap, s1 is '" << s1 << "' and s2 is '" << s2 << "'" << std::endl;
}