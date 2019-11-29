#include <string>
#include "CoffeeTable.h"

using namespace std;

class ModernCoffeeTable: public CoffeeTable
{
public:
  string getTypeOfCoffeeTable()
  {
    return "ModernCoffeeTable";
  }
};
