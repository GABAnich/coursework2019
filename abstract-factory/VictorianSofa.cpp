#include <string>
#include "Sofa.h"

using namespace std;

class VictorianSofa: public Sofa
{
public:
  VictorianSofa()
  {
    name = "Victorian Sofa";
    description = "Victorian Sofa, 1890";
    imageURL = "./images/vs.jpg";
  }

  string getTypeOfSofa()
  {
    return "VictorianSofa";
  }
};
