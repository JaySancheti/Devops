#include <iostream>
#include "HomeOwner.h"
#include "SmartGeyser.h"
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

int main() {
  cout<<"VERSION 2";
  HomeOwner h;
  // Create objects for the Smart Geyser, Environment Sensor and Water Heater classes
  SmartGeyser g(10);
  EnvironmentSensor e;
  WaterHeater w("Electric");
  
  // Set up house owner's home with the created devices
  h.setDevice(&g, &e, &w);
  
  // Let the house owner check their smart geyser
  cout << "\nChecking Smart Geyser:\n";
  g.check();
  
  // Let the house owner turn on/off the water heater
  cout << "\nTurning On Water Heater\n";
  w.turnOn();
  cout << "Water Heater is now ON.\n";
  cout << "Press Enter to continue...";
  cin.get();
  
  // Display current status of the water heater
  cout << "\nCurrent Status of Water Heater:\n";
  w.displayStatus();
  
  // Let the house owner adjust the temperature setting of the water heater
  int newTemp = 95;
  cout << "\nAdjusting Temperature Setting (New Temp: " << newTemp << "):\n";
  w.adjustTemperatureSetting(newTemp);
  
  // Display updated status of the water heater 
  cout << "\nUpdated Status of Water Heater:\n";
  w.displayStatus();
  
  return 0;
}
