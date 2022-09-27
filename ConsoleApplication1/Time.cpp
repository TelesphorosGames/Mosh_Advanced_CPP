#include "Time.h"

#include <stdexcept>

Time::Time(const int hour, const int minute, const int second) :
Hour(ValidateHour(hour)),
Minute(ValidateMinute(minute)),
Second(ValidateSecond(second))
{
}

int Time::ValidateHour(const int& hour)
{
    if (hour < 0 || hour > 24)
    {
        throw std::invalid_argument("Hour invalid");
    }
    return hour;
}

int Time::ValidateMinute(const int& minute)
{
    if (minute < 0 || minute > 60)
    {
        throw std::invalid_argument("Miunute invalid");
    }
    return minute;
}

int Time::ValidateSecond(const int& second)
{
    if (second < 0 || second > 60)
    {
        throw std::invalid_argument("Second invalid");
    }
    return second;
}

