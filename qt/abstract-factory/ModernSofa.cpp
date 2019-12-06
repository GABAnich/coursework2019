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
    imageURL = "/home/gaba/Desktop/coursework2019/images/ms.png";
  }

  string getTypeOfSofa()
  {
    return "ModernSofa";
  }
};
