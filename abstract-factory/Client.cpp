#include <iostream>
#include "FurnitureFactory.h"

using namespace std;

class Client
{
private:
  FurnitureFactory* factory;
public:
  Client(FurnitureFactory* f)
  {
    this->factory = f;
  }

  void someOperation()
  {
    Chair* chair = factory->createChair();
    CoffeeTable* coffeeTable = factory->createCoffeeTable();
    Sofa* sofa = factory->createSofa();

    cout << "Chair: " << chair->getTypeOfChair() << endl;
    cout << "CoffeeTable: " << coffeeTable->getTypeOfCoffeeTable() << endl;
    cout << "Sofa: " << sofa->getTypeOfSofa() << endl;
  }
};
