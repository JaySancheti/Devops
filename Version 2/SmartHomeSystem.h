#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "HomeOwner.h"
#include "BathroomGeyser.h"

class SmartHomeSystem {
public:
  static SmartHomeSystem& getInstance();

  
private:
  SmartHomeSystem();
  BathroomGeyser* geyser_;

};

#endif // SMARTHOMESYSTEM_H
