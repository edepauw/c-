#include "Serial.h"

void * serialize(void)
{
	char *data = new char[16 * sizeof(char) + sizeof(int)];
	char c;


	for (int i = 0; i < 8; i++)
	{
		c = 0;
		while (!isdigit(c) && !isalpha(c))
			c = rand() % 128;
		data[i] = c;
	}
	*reinterpret_cast<int *>(data + 8) = rand();
	for (int i = 0; i < 8; i++)
	{
		c = 0;
		while (!isdigit(c) && !isalpha(c))
			c = rand() % 128;
		data[i + 8 + sizeof(int)] = c;
	}
	return data;
}

