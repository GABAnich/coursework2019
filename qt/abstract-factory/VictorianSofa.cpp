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
    imageURL = "/home/gaba/Desktop/coursework2019/images/vs.png";
  }

  string getTypeOfSofa()
  {
    return "VictorianSofa";
  }
};
