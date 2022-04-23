#include "../include/AddFlight.h"

AddFlight::AddFlight()
{
    this->GetInfo();
}

void AddFlight::GetInfo()
{
    std::cout << "Departure: ";
    std::cin >> departure;
    std::cout << "Arrival: ";
    std::cin >> arrival;
}
