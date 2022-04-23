#pragma once

#include <iostream>

#include "Time.h"

class AddFlight
{
private:
    std::string departure;
    std::string arrival;
    Time departure_time;
public:
    AddFlight();
    void GetInfo();
};