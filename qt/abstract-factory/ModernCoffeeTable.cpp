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
    imageURL = "/home/gaba/Desktop/coursework2019/images/mct.png";
  }

  string getTypeOfCoffeeTable()
  {
    return "ModernCoffeeTable";
  }
};
