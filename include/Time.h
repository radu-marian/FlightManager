#pragma once

#include <iostream>

class Time
{
private:
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;
public:
    // friend std::istream& operator>>(std::istream& is, Time& obj);

    void GetTime();
};