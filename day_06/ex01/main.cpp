#include <iostream>
#include <cstdlib>
#include <stdint.h>

struct Data {
    std::string str;
    int num;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main(void) {
    Data data;
    data.str += "Ecole";
    data.num = 42;
    Data *ptr = &data;

    uintptr_t raw;

    raw = serialize(ptr);

    std::cout << "ptr before         = " << ptr << std::endl;
    std::cout << "deserialize value  = " << deserialize(raw) << std::endl;
    std::cout << deserialize(raw)->str << deserialize(raw)->num << std::endl;
    return (0);
}