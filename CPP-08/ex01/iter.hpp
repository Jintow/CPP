//
// Created by Johan Litaudon on 4/27/23.
//

#ifndef CPP_07_ITER_HPP
#define CPP_07_ITER_HPP

#include <unistd.h>

template <typename T>
void iter(T *array, size_t size, void f(T &item))
{
	for(size_t i = 0; i <size; i++)
	{
		f(array[i]);
	}
}

#endif //CPP_07_ITER_HPP
