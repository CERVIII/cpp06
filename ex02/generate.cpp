#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;

	switch (r)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}