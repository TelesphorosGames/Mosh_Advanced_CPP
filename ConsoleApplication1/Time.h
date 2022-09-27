#pragma once

class Time
{
public:

    Time(int hour, int minute, int second);

    int GetHour() const;
    int GetMinute() const;
    int GetSecond() const;
    
private:
    int Hour;
    int Minute;
    int Second;
    
};
