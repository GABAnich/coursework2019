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
    imageURL = "/home/gaba/Desktop/coursework2019/images/vc.png";
  }

  string getTypeOfChair()
  {
    return "VictorianChair";
  }
};
