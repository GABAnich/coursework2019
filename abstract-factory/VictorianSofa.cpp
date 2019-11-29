#include <string>
#include "Sofa.h"

using namespace std;

class VictorianSofa: public Sofa
{
public:
  string getTypeOfSofa()
  {
    return "VictorianSofa";
  }
};
