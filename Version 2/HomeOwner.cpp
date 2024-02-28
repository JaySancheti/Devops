#include "HomeOwner.h"
#include "SmartHomeSystem.h" 

HomeOwner::HomeOwner(const std::string &name, int preferredTemperature) : name(name), preferredTemperature_(preferredTemperature) {}

const std::string &HomeOwner::getName() const
{
    return name;
}

int HomeOwner::getPreferredTemperature() const
{
    return preferredTemperature_;
}

void HomeOwner::setPreferredTemperature(int temperature)
{
    preferredTemperature_ = temperature;
}

