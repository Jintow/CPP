/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 11:27:36 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	isInsideTriangle(Point a, Point b, Point c, Point toStudy);

std::ostream & operator<<(std::ostream & out, Fixed const & number);

int main( void )
{
	Point s1(1.0f, 1.0f);
	Point s2;
	Point s3(0.0f, 2.0f);
	Point	toStudy(0.5f, 0.3f);

	std::cout << isInsideTriangle(s1, s2, s3, toStudy) << std::endl;
}
