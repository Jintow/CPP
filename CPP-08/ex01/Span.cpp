//
// Created by Johan Litaudon on 5/2/23.
//

#include "Span.hpp"

Span::Span(unsigned int N):_N(N)
{}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_N = src._N;
	}
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->_list.size() != this->_N)
		_list.push_back(nb);
	else
		throw std::out_of_range("Span is full");
}

unsigned int Span::shortestSpan() const
{
	if (_list.size() <= 1)
		throw std::out_of_range("Span doesn't contain enough elements");
	std::vector<int> temp = this->_list;
	std::sort(temp.begin(), temp.end());
	int min = temp[1] - temp[0];
	for (unsigned int i = 1; i < temp.size() - 2; i++)
	{
		if (temp[i + 1] - temp [i] < min)
			min = temp[i + 1] - temp [i];
	}
	return (min);
}

unsigned int Span::longestSpan() const
{
	if (_list.size() <= 1)
		throw std::out_of_range("Span doesn't contain enough elements");
	std::vector<int> temp = this->_list;
	std::sort(temp.begin(), temp.end());
	return (temp[temp.size() - 1] - temp[0]);
}

//void Span::addRangeOfNumber(int range, int min, int max)
//{
//	if (_list.size() == _N)
//		throw std::out_of_range("Span is full");
//	unsigned int i = 0;
//	unsigned int sizeLeft = _N - _list.size();
//	if (max < min)
//	{
//		int temp = min;
//		min = max;
//		max = min;
//	}
//	while (sizeLeft - i > 0)
//	{
//		unsigned int diff = max - min;
//		addNumber()
//		i++;
//	}
//}
