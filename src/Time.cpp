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

bool Time::IsValid()
{
    if (month == 0 || month > 12)
        return 0;
    if (day == 0)
        return 0;
    if (month == 0 || month > 12)
        return 0;
    if ((month <= 7 && month % 2 == 1) || (month >= 8 && month % 2 == 0))
    {
        if (day > 31)
            return 0;
    }
    else
    {
        if (month == 2)
        {
            if (day > 28)
                return 0;
        }
        else
        {
            if (day > 30)
                return 0;
        }
    }

    return 1;
}

std::ostream& operator<<(std::ostream& os, Time& obj)
{
    os << obj.month << " " << obj.day << " " << obj.hour << " " << obj.minute;
    return os;
}