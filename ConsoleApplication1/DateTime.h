﻿#pragma once
#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time
{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second)
        : Date(GetYear(), GetMonth(), GetDay()),
          Time(GetHour(), GetMinute(), GetSecond())
    {
    }
};
