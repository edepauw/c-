#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
T max(T const a, T const b)
{
	if (a > b)
		return (a);
	return (b);
}

template <class T>
T min(T const a, T const b)
{
	if (a < b)
		return (a);
	return (b);
}

template <class T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
#endif
