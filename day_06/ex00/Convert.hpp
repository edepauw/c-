#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <iostream>
#include <cctype>
#include <string>

class Convert
{
	private:
		Convert(void);
		int _int;
		char * _toConvert;
		std::string _stringtoConvert;
		bool _allimpossible;
		bool _intpossible;
		bool _charpossible;
		char _char;
		double _double;
		float _float;
	public:
		Convert(char *str);
		bool    isRound(void);
		void display(void);
		~Convert(void);
};
#endif
