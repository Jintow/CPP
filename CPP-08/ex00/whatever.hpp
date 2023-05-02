//
// Created by Johan Litaudon on 4/27/23.
//

#ifndef CPP_07_WHATEVER_HPP
#define CPP_07_WHATEVER_HPP

#pragma once
#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
T &min(T &x, T &y)
{
	return (x < y ? x : y);
}

template <typename T>
T &max(T &x, T &y)
{
	return (x > y ? x : y);
}


#endif //CPP_07_WHATEVER_HPP
