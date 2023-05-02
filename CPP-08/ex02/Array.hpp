//
// Created by Johan Litaudon on 5/2/23.
//

#ifndef CPP_07_ARRAY_HPP
#define CPP_07_ARRAY_HPP

#include <unistd.h>
#include <iostream>

template <typename T>
class Array
{
public:
	Array():_array(new T[0]), _size(0){};
	Array(unsigned int nb):_size(nb) {
		this->_array = new T[nb];
		};
	Array(const Array &src):_size(src.size()){
		this->_array = new T[this->_size];
		for(unsigned int i = 0; i < this->_size; i++)
		{
			this->_array[i] = src._array[i];
		}
	}
	~Array(){
			delete[] _array;
	};

	Array &operator=(const Array &src){
		if (this != src)
		{
			this->_size = src.size();
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = src._array[i];
			}
		}
		return (*this);
	}

	T &operator[](unsigned int index) const
	{
		if (index >= this->_size)
			throw std::out_of_range("Index is out of range");
		return (this->_array[index]);
	}


	unsigned int size() const{
		return (this->_size);
	}

private:
	T*				_array;
	unsigned int	_size;
};

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &array)
{
	for(unsigned int i = 0; i < array.size(); i++)
		out << array[i] << " ";
	out << std::endl;
	return (out);
}
#endif //CPP_07_ARRAY_HPP
