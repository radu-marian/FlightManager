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
    friend std::ostream& operator<<(std::ostream& os, Time& obj);

    void GetTime();
    bool IsValid();
};