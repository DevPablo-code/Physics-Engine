#include <string>
#include "PhysicalObject.h"

PhysicalObject::PhysicalObject(float aMass, PhysicalMaterial &aMaterial) {
	mass = aMass;
	material = aMaterial;
	volume = calculateVolume(mass, material.density);
}

float PhysicalObject::GetVolume()
{
	return volume;
}

float PhysicalObject::calculateVolume(float mass, float density) {
	return density * mass;
}
