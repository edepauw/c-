#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void iter(T const * array, int n, void f(T const &))
{
	for (int i = 0; i < n; i++)
		f(array[i]);
}

#endif
