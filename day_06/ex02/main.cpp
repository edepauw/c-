#include <iostream>

class Base {public : virtual ~Base( void ) {} };
class BaseA : public Base{};
class BaseB : public Base{};
class BaseC : public Base{};

Base * generate(void)
{
	int i = rand() % 3;

	if (i == 0)
		return new BaseA;
	else if (i == 1)
		return new BaseB;
	else
		return new BaseC;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<BaseA *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<BaseB *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<BaseC *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<BaseA *>(&p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<BaseB *>(&p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<BaseC *>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	srand(time(NULL));

	BaseA a;
	BaseB b;
	BaseC c;

	Base *pa = &a;
	Base *pb = &b;
	Base *pc = &c;
	Base *prand = generate();

	std::cout << "Type de pa" << std::endl << "par ptr = ";
	identify_from_pointer(pa);
	std::cout << "par ref = ";
	identify_from_reference(*pa);

	std::cout << std::endl << "Type de pb" << std::endl << "par ptr = ";
	identify_from_pointer(pb);
	std::cout << "par ref = ";
	identify_from_reference(*pb);

	std::cout << std::endl << "Type de pc" << std::endl << "par ptr = ";
	identify_from_pointer(pc);
	std::cout << "par ref = ";
	identify_from_reference(*pc);

	std::cout << std::endl << "Type de prand" << std::endl << "par ptr = ";
	identify_from_pointer(prand);
	std::cout << "par ref = ";
	identify_from_reference(*prand);
	delete prand;
}
