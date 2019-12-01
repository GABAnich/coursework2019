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

    cout << "Chair type: " << chair->getTypeOfChair() << endl;
    cout << "Chair name: " << chair->getName() << endl;
    cout << "Chair description: " << chair->getDescription() << endl;
    cout << "Chair imageURL: " << chair->getImageURL() << endl;
    cout << endl;
  
    cout << "CoffeeTable type: " << coffeeTable->getTypeOfCoffeeTable() << endl;
    cout << "CoffeeTable name: " << coffeeTable->getName() << endl;
    cout << "CoffeeTable description: " << coffeeTable->getDescription()
      << endl;
    cout << "CoffeeTable imageURL: " << coffeeTable->getImageURL() << endl;
    cout << endl;

    cout << "Sofa type: " << sofa->getTypeOfSofa() << endl;
    cout << "Sofa name: " << sofa->getName() << endl;
    cout << "Sofa description: " << sofa->getDescription() << endl;
    cout << "Sofa imageURL: " << sofa->getImageURL() << endl;
    cout << endl;

    cout << endl;
  }
};
