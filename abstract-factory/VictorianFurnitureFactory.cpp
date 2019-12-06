#include "FurnitureFactory.h"
#include "VictorianChair.cpp"
#include "VictorianCoffeeTable.cpp"
#include "VictorianSofa.cpp"

class VictorianFurnitureFactory: public FurnitureFactory
{
public:
  Chair* createChair()
  {
    return new VictorianChair();
  }
  
  CoffeeTable* createCoffeeTable()
  {
    return new VictorianCoffeeTable();
  }
  
  Sofa* createSofa()
  {
    return new VictorianSofa();
  }
};
