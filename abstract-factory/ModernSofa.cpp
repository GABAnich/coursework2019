#include <string>
#include "Sofa.h"

using namespace std;

class ModernSofa: public Sofa
{
public:
  ModernSofa()
  {
    name = "Modern Sofa";
    description = "Modern Sofa, 2019";
    imageURL = "./images/ms.jpg";
  }

  string getTypeOfSofa()
  {
    return "ModernSofa";
  }
};
