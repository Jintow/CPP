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

Span &Span::operator=(const Span &src)
{
	if (this != src)
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
		throw std::out_of_range("Span is full")
}

void Span::shortestSpan() const
{
	if (_list.size()git)
}
