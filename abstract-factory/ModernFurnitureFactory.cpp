#include "FurnitureFactory.h"
#include "ModernChair.cpp"
#include "ModernCoffeeTable.cpp"
#include "ModernSofa.cpp"

class ModernFurnitureFactory: public FurnitureFactory
{
public:
  Chair* createChair()
  {
    return new ModernChair();
  }
  
  CoffeeTable* createCoffeeTable()
  {
    return new ModernCoffeeTable();
  }
  
  Sofa* createSofa()
  {
    return new ModernSofa();
  }
};
