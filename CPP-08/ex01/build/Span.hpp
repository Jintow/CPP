//
// Created by Johan Litaudon on 5/2/23.
//

#ifndef CPP_08_SPAN_HPP
#define CPP_08_SPAN_HPP

#include <vector>
#include <stdexcept>

class Span {

	Span(unsigned int N);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	void			addNumber(int nb);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;

private:
	Span();
	std::vector<int>	_list;
	unsigned int		_N;

};


#endif //CPP_08_SPAN_HPP
