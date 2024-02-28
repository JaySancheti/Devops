#ifndef BATHROOMGEYSER_H
#define BATHROOMGEYSER_H

#include "TemperatureSensor.h"
#include "WaterHeater.h" 

class BathroomGeyser : public WaterHeater {
public:
  int current_temperature;
  BathroomGeyser(TemperatureSensor& sensor);

  
  void activateGeyser();

  
  int getCurrentTemperature();

  
  void setHeatingTemperature(int temperature);
};

#endif // BATHROOMGEYSER_H
