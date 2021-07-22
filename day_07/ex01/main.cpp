#include "iter.hpp"

template <typename T>
void print(T const & i)
{
    std::cout << i << std::endl;
}


int main()
{
    int int_arr[5] = {1, 2, 3, 4, 5};
    const int c_int_arr[5] = {1, 2, 3, 4, 5};

    float float_arr[5] = {42.2f, 92.1f, 8.9f, 47.8f, 50.4f};
    const float c_float_arr[5] = {42.2f, 92.1f, 8.9f, 47.8f, 50.4f};
    
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    const char c_char_arr[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "==TEST START==" << std::endl;

    std::cout << "Int :" << std::endl;
    iter(int_arr, 5, print);
    std::cout << "Float :" << std::endl;
    iter(float_arr, 5, print);
    std::cout << "Char :" << std::endl;
    iter(char_arr, 5, print);

	std::cout << "==CONST==" << std::endl;

    std::cout << "Int :" << std::endl;
    iter(c_int_arr, 5, print);
    std::cout << "Float :" << std::endl;
    iter(c_float_arr, 5, print);
    std::cout << "Char :" << std::endl;
    iter(c_char_arr, 5, print);

    return 0;
}