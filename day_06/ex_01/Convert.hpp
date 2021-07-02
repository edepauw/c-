#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <iostream>
#include <cctype>
#include <string>

class Convert
{
	private:
		Convert(void);
		double _universal;
		int _int;
		char _char;
		double _double;
		float _float;
		std::string _toConvert;
	public:
		Convert(char *str);
		bool isImpossible(void);
		void exception(std::string & str);
		void display(void);
		~Convert(void);
};
#endif
