#include <iostream>
#include "PhysicalObject.h"

int main()
{
	PhysicalMaterial wood(1540);
	PhysicalObject table(10, wood);
	std::cout << table.GetVolume();
}
