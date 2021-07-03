#include "Convert.hpp"
Convert::Convert(void)
{
}

Convert::Convert(char *str): _toConvert(str),_allimpossible(false), _intpossible(true), _charpossible(true)
{
    char *p_end;
    _stringtoConvert = str;
    if (_stringtoConvert == "nanf" || _stringtoConvert == "nan" || _stringtoConvert == "+inff"
        || _stringtoConvert == "-inff" || _stringtoConvert == "-inf" || _stringtoConvert == "+inf" || _stringtoConvert == "inf")
        _double = strtod(_toConvert, &p_end);
    else{
        if (_toConvert[1] == 0 && std::isprint(_toConvert[0]) && !isnumber(_toConvert[0]))
            _double = _toConvert[0];
        else
            _double = strtod(_toConvert, &p_end);
        if (_double == 0 && _stringtoConvert[0] != '0')
            _allimpossible = true;
    }
    if (_double > 2147483647 || _double < -2147483648 || _double != _double)
        _intpossible = false;
    if (_double > 127 || _double < -128 ||  _double != _double)
        _charpossible = false;
    _int = static_cast<int>(_double);
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_double);
    display();
}

Convert::~Convert(void)
{
}

bool    Convert::isRound(void)
{
    double d;
    d = _double - _int;
    if (d == 0)
        return true;
    else
        return false;

}

void Convert::display(void)
{
    if (_allimpossible)
    {
        std::cout << "  char: impossible " << std::endl;
        std::cout << "   int: impossible " << std::endl;
        std::cout << " float: impossible " << std::endl;
        std::cout << "double: impossible " << std::endl;
        return ;
    }
    if (_charpossible)
    {
        if (isprint(_char))
            std::cout << "  char: '" << _char << "'" << std::endl;
        else
            std::cout << "  char: non displayable " << std::endl;
    }
    else
        std::cout << "  char: impossible " << std::endl;
    if (_intpossible)
        std::cout << "   int: " << _int << std::endl;
    else
        std::cout << "   int: impossible" << std::endl;
    std::cout << " float: " << _float;
    if (isRound())
        std::cout << ".0f" << std::endl;
    else
        std::cout << "f" << std::endl;
    std::cout << " double: " << _double;
    if (isRound())
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;
}