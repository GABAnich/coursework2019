#include <string>
#include "Chair.h"

using namespace std;

class VictorianChair: public Chair
{
public:
  VictorianChair()
  {
    name = "Victorian Chair";
    description = "Victorian Chair, 1890 ";
    imageURL = "./images/vc.jpg";
  }

  string getTypeOfChair()
  {
    return "VictorianChair";
  }
};
