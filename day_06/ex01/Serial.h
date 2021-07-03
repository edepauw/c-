#ifndef SERIAL_H
# define SERIAL_H
#include <typeinfo>
#include <string>
#include <iostream>
#include <unistd.h>


struct Data{
	std::string s1;
	int n;
	std::string s2;
};
void * serialize(void);
Data * deserialize(void * raw);

#endif
