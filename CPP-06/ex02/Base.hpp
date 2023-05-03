/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:33:06 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/05/03 11:33:06 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_06_BASE_HPP
#define CPP_06_BASE_HPP

class Base{
public:
	virtual ~Base() {};
};

class A : public Base{

};

class B : public Base{

};

class C : public Base{

};
#endif //CPP_06_BASE_HPP
