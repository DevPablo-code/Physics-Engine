#ifndef PHYSICAL_MATERIAL_H
#define PHYSICAL_MATERIAL_H

class PhysicalMaterial {
	public:
		float density;
		float static_friction_coefficient = 1;
		float kinetic_sliding_friction_cofficient = 1;
		PhysicalMaterial(float aDensity);  
};

#endif;
