#include <iostream>

#include "Hospital.h"

int main() {
  Hospital *hosp = new Hospital("sample address");
  hosp->Print();
  std::cout << hosp->getService() << "\n";
  delete hosp;
  return 0;
}
