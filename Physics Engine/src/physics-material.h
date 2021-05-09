#pragma once

struct PhysicsMaterial
{
   float Density;

   float StaticFriction;
   float DynamicFriction;

   PhysicsMaterial(const float density = 1.0f, const float staticFric = 1.0f, const float dynamicFric = 1.0f)
      : Density(density), StaticFriction(staticFric), DynamicFriction(dynamicFric) {}
};