#pragma once
#include "physics-material.h"

inline constexpr float CalculateVolume(const float mass, const float density)
{
   return mass / density;
}

struct PhysicsObject
{
   float Mass;
   float Volume;

   PhysicsMaterial PhysicsM;

   PhysicsObject(const float mass, const PhysicsMaterial& pm)
      : Mass(mass), PhysicsM(pm), Volume(CalculateVolume(mass, pm.Density)) {}
};