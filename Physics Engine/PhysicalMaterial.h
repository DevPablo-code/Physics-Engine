#pragma once

class PhysicalMaterial 
{
public:
	float density;
	float static_friction_coefficient = 1.0f;
	float KineticCoefficient = 1.0f;

	PhysicalMaterial() = default;
	PhysicalMaterial(float aDensity);  
};