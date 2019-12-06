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
    imageURL = "/home/gaba/Desktop/coursework2019/images/mc.png";
  }

  string getTypeOfChair()
  {
    return "ModernChair";
  }
};
