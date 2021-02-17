#include "Pony.hpp"

int main(void)
{
	Pony s_pony = Pony();
	Pony *h_pony = new Pony("francis", 14, 5, "white", "female");
	delete h_pony;
}
