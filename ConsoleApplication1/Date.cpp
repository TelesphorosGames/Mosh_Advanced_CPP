#include "Date.h"

#include <stdexcept>

Date::Date(int year, int month, int day) :
Year(GetYear()),
Month(GetMonth()),
Day(GetDay())
{
    
}

int Date::GetYear() const
{
    if (Year < 1900 || Year > 2022)
    {
        throw std::invalid_argument("Year invalid");
    }
    return Year;
}

int Date::GetMonth() const
{
    if (Month < 1 || Month > 12)
    {
        throw std::invalid_argument("Month invalid");
    }
    return Month;
}

int Date::GetDay() const
{
    if (Day < 1 || Day > 31)
    {
        throw std::invalid_argument("Day invalid");
    }
    return Day;
}
