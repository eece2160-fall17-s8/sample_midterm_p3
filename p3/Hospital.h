#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include <string>
#include "Building.h"

class Hospital : public Building {
 public:
  Hospital(std::string address);
  std::string getService();
};

#endif  // HOSPITAL_H_
