#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

class TemperatureSensor {
public:
  virtual int getTemperature() = 0;

private:
  int simulated_temperature_;

  TemperatureSensor() : simulated_temperature_(20) {}
};

#endif // TEMPERATURESENSOR_H
