#include "Date.h"

#include <stdexcept>

Date::Date(const int year, const int month, const int day) :
Year(ValidateYear(year)),
Month(ValidateMonth(month)),
Day(ValidateDay(day))
{
    
}

int Date::ValidateYear(const int& year)
{
    if (year <1900 || year > 2022)
    {
        throw std::invalid_argument("Year invalid");
    }
    return year;
}

int Date::ValidateMonth(const int& month)
{
    if (month < 1 || month > 12)
    {
        throw std::invalid_argument("Month invalid");
    }
    return month;
}

int Date::ValidateDay(const int& day)
{
    if (day < 1 || day > 31)
    {
        throw std::invalid_argument("Day invalid");
    }
    return day;
}

bool Date::operator>(const Date& Other) const
{
   
    if(Year == Other.Year)
    {
        if(Month>Other.Month) return true;
        if(Month< Other.Month) return false;
        if(Month == Other.Month )
        {
            if(Day > Other.Day) return true;
            return false;
        }
    }
    if(Year > Other.Year) return true;
    if(Year< Other.Year) return false;
    return false;
}

bool Date::operator<(const Date& Other) const
{
    if(Year == Other.Year)
    {
        if(Month>Other.Month) return false;
        if(Month< Other.Month) return true;
        if(Month == Other.Month )
        {
            if(Day > Other.Day) return false;
            return true;
        }
    }
    if(Year > Other.Year) return false;
    if(Year< Other.Year) return true;
    return false;
}
