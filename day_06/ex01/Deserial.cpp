#include "Serial.h"

Data * deserialize(void * raw)
{
	Data *data = new Data;

	char *c = reinterpret_cast<char *>(raw);
	data->s1 = std::string(c, 8);
	data->n = *reinterpret_cast< int *>(c + 8);
	data->s2 = std::string(c + 8 + sizeof(int), 8);

	return data;
}
