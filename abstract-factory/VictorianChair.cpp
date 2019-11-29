#include <string>
#include "Chair.h"

using namespace std;

class VictorianChair: public Chair
{
public:
  string getTypeOfChair()
  {
    return "VictorianChair";
  }
};
