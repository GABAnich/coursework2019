#pragma once

#include <iostream>
#include "Item.h"

using namespace std;

class CoffeeTable: public Item
{
public:
  virtual string getTypeOfCoffeeTable() = 0;
};
