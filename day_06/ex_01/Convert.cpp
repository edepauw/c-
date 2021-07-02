#include "Convert.hpp"
Convert::Convert(void)
{
}

Convert::Convert(char *str): _toConvert(str)
{

}

Convert::~Convert(void)
{
}

void Convert::exception(std::string & str)
{

}

bool Convert::isImpossible(void)
{
    int a(0);
    bool b(false);

    if (_toConvert == "nanf" && _toConvert == "nan" && _toConvert == "+inff"
        && _toConvert == "-inff" && _toConvert == "-inf" && _toConvert == "+inf") // exception
        exception(_toConvert);
    if (_toConvert.length() == 1 && std::isalpha(_toConvert[0])) // si 'a','b','}'
        _universal = _toConvert[0];

    for (int i = 0; i < _toConvert.length() ; i++)
        if (isnumber(_toConvert[i]))
            a++;
    if (a == _toConvert.length()) // int normal
        _universal = stod(_toConvert);
        a = 0;
    for (int i = 0; i < _toConvert.length() ; i++)
    {
        if (isnumber(_toConvert[i]))
            a++;
        if (_toConvert[i] == '.' && i != 0 && i <= _toConvert.length())
            b++;
    }
    if (a + b == _toConvert.length() && b == 1) // double
        _universal = stod(_toConvert);
    



}

void Convert::display(void)
{

}