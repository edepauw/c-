#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
public:
	Array(){_size = 0; _array = NULL;};

	Array(unsigned int n)
	{
		_size = n;
		_array = new T[n];
		for (unsigned int i = 0; i < _size; i++)
            _array[i] = T();
	}

	Array(Array const & s_array)
	{
		_size = 0;
		_array = NULL;
		*this = s_array;
	}

	Array &operator=(const Array &s_array)
	{
		if (this->_array)
			delete[] this->_array;
		_size = s_array.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
            _array[i] = s_array[i];
		return (*this);
	}

	~Array()
	{
		if (_array != NULL)
			delete [] _array;
	}

	T &operator[](const unsigned int i) const
	{
		if (i < _size)
			return (_array[i]);
		throw std::out_of_range("ERROR OUT OF RANGE");
	}

	unsigned int size() const{return (_size);};
	T * getArray() const{return(_array);};
private:
	unsigned int _size;
	T * _array;
};

#endif