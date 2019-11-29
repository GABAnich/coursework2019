#include <iostream>
#include "Client.cpp"
#include "FurnitureFactory.h"
#include "ModernFurnitureFactory.cpp"
#include "VictorianFurnitureFactory.cpp"

using namespace std;

int main() {
  FurnitureFactory* factory1 = new ModernFurnitureFactory();
  FurnitureFactory* factory2 = new VictorianFurnitureFactory();
  Client* client = new Client(factory1);

  cout << "Factory 1" << endl;
  client->someOperation();

  client = new Client(factory2);
  cout << "Factory 2" << endl;
  client->someOperation();
}
