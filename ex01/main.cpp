#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data data;
	data.value = 42;

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized data: 0x" << raw << std::endl;

	Data *ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized data: " << std::dec << ptr->value << std::endl;

	if (ptr == &data)
		std::cout << "ptr and &data are the same" << std::endl;
	else
		std::cout << "ptr and &data are different" << std::endl;

	return 0;
}