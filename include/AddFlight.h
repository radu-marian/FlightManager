#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <time.h>

#include "Time.h"

class AddFlight
{
private:
    unsigned int id;
    std::string departure;
    std::string arrival;
    Time departure_time;
public:
    AddFlight();
    void GetInfo();
    void AddToFile();
};