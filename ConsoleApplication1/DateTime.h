#pragma once
#include <ostream>

#include "Date.h"
#include "Time.h"

using namespace std;

class DateTime : public Date, public Time
{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second)
        : Date(ValidateYear(year), ValidateMonth(month), ValidateDay(day)),
          Time(ValidateHour(hour), ValidateMinute(minute), ValidateSecond(second))
    {
    }
    
  
};

ostream& operator<<(ostream& stream, const DateTime& date_time);