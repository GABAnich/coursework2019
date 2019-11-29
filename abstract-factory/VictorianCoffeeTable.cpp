#include <string>
#include "CoffeeTable.h"

using namespace std;

class VictorianCoffeeTable: public CoffeeTable
{
public:
  string getTypeOfCoffeeTable()
  {
    return "VictorianCoffeeTable";
  }
};
