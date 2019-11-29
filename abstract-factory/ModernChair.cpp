#include <string>
#include "Chair.h"

using namespace std;

class ModernChair: public Chair
{
public:
  string getTypeOfChair()
  {
    return "ModernChair";
  }
};
