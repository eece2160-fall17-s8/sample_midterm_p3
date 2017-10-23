#include "Building.h"

#include <iostream>

Building::Building(std::string address) {
  this->address = address;
}

void Building::Print() {
  std::cout << address << "\n";
}
