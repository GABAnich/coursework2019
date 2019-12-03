#pragma once

#include <iostream>
#include "Item.h"

using namespace std;

class Chair: public Item
{
public:
  virtual string getTypeOfChair() = 0;
};
