#include <string>
#include "CoffeeTable.h"

using namespace std;

class ModernCoffeeTable: public CoffeeTable
{
public:
  ModernCoffeeTable()
  {
    name = "Modern Coffee Table";
    description = "Modern Coffee Table, 2019";
    imageURL = "./images/mc.jpg";
  }

  string getTypeOfCoffeeTable()
  {
    return "ModernCoffeeTable";
  }
};
