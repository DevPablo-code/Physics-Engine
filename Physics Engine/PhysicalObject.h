#ifndef PHYSICAL_OBJECT_H
#define PHYSICAL_OBJECT_H

#include "PhysicalMaterial.h"

class PhysicalObject 
{
private:
		float mass;
		float volume;
		//PhysicalMaterial material;
		float calculateVolume(float mass, float density);
public:
		PhysicalObject(float aMass, PhysicalMaterial &aMaterial);
		float GetVolume();
};

#endif