#pragma once

#include <iostream>
#include "Item.h"

using namespace std;

class Sofa: public Item
{
public:
  virtual string getTypeOfSofa() = 0;
};
