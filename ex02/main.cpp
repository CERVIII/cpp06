#include "Base.hpp"
#include "Serializer.hpp"
#include <iostream>

int main()
{
	Base *obj = generate();

	std::cout << "Identificacion por puntero: ";
	identify(obj);

	std::cout << "Identificacion por referencia: ";
	identify(*obj);

	delete obj;
	return 0;
}