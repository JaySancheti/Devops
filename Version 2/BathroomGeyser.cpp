#include "BathroomGeyser.h"
bool isActivated_ = false;
void BathroomGeyser::activateGeyser() {
  if (!isActivated_) {
    isActivated_ = true;
    current_temperature = 40; 
    std::cout << "Bathroom geyser activated and heating to 40 degrees." << std::endl;
  } else {
    std::cout << "Geyser already activated." << std::endl;
  }
}


void BathroomGeyser::setHeatingTemperature(int temperature) {
  std::cout << "Setting heating temperature to: " << temperature << " degrees." << std::endl;
}
