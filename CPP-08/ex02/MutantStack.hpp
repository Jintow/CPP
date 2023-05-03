/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:25:40 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 15:31:20 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_08_MUTANTSTACK_HPP
#define CPP_08_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack(){};
	MutantStack(const MutantStack &src) : std::stack<T>(){
		*this = src;
	}

	MutantStack &operator=(const MutantStack &src){
		this->c = src.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void){
		return (this->c.begin());
	}
	iterator end(void){
		return (this->c.end());
	}
};

#endif //CPP_08_MUTANTSTACK_HPP
