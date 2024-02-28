#include "TemperatureSensor.h"

class RealTemperatureSensor : public TemperatureSensor {
public:
  int getTemperature() override {
    // get the temperature from the sensor
    return ;
  }
};
