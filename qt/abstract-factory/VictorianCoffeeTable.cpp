#include <string>
#include "CoffeeTable.h"

using namespace std;

class VictorianCoffeeTable: public CoffeeTable
{
public:
  VictorianCoffeeTable()
  {
    name = "Victorian Coffee Table";
    description = "Victorian Coffee Table, 1890";
    imageURL = "./images/vct.jpg";
  }

  string getTypeOfCoffeeTable()
  {
    return "VictorianCoffeeTable";
  }
};
