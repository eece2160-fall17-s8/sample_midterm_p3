#include "Hospital.h"

Hospital::Hospital(std::string address) : Building(address) {
}

std::string Hospital::getService() {
  return "Oncology";
}
