#ifndef BUILDING_H_
#define BUILDING_H_

#include <string>

class Building {
 std::string address;
public:
 Building(std::string address);
 virtual void Print();
 virtual std::string getService() = 0;
};

#endif  // BUILDING_H_
