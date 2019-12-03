#include <string>
#include "Chair.h"

using namespace std;

class ModernChair: public Chair
{
public:
  ModernChair()
  {
    name = "Modern Chair";
    description = "Modern Chair, 2019";
    imageURL = "./images/mc.jpg";
  }

  string getTypeOfChair()
  {
    return "ModernChair";
  }
};
