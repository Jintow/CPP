//
// Created by Johan Litaudon on 5/2/23.
//

#ifndef CPP_08_EASYFIND_HPP
#define CPP_08_EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T &container, int value){

    typename T::iterator find = std::find(container.begin(), container.end(), value);

    if (find == container.end())
        throw std::logic_error("No corresponding value");
    return (find);

}

#endif //CPP_08_EASYFIND_HPP
