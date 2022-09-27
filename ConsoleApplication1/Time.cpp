#include "Time.h"

#include <stdexcept>

Time::Time(int hour, int minute, int second) :
Hour(GetHour()),
Minute(GetMinute()),
Second(GetSecond())
{
}

int Time::GetHour() const
{
    if (Hour < 0 || Hour > 24)
    {
        throw std::invalid_argument("Hour invalid");
    }
    return Hour;
}

int Time::GetMinute() const
{
    if (Minute < 0 || Minute > 60)
    {
        throw std::invalid_argument("Miunute invalid");
    }
    return Minute;
}

int Time::GetSecond() const
{
    if (Second < 0 || Second > 60)
    {
        throw std::invalid_argument("Second invalid");
    }
    return Second;
}

