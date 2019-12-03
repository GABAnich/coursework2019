#pragma once

#include "Chair.h"
#include "CoffeeTable.h"
#include "Sofa.h"

class FurnitureFactory
{
public:
  virtual Chair* createChair() = 0;
  virtual CoffeeTable* createCoffeeTable() = 0;
  virtual Sofa* createSofa() = 0;
};


