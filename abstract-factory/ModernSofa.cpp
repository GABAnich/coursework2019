#include <string>
#include "Sofa.h"

using namespace std;

class ModernSofa: public Sofa
{
public:
  string getTypeOfSofa()
  {
    return "ModernSofa";
  }
};
