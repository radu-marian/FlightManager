#include "../include/Time.h"


void Time::GetTime()
{
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Hour: ";
    std::cin >> hour;
    std::cout << "Minute: ";
    std::cin >> minute;
}