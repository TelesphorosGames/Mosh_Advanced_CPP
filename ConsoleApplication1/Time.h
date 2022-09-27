#pragma once

class Time
{
public:

    Time(int hour, int minute, int second);

    int GetHour() const {return Hour ; }
    int GetMinute() const {return Minute ; }
    int GetSecond() const {return Second ; }

    static int ValidateHour(const int& hour);
    static int ValidateMinute(const int& minute);
    static int ValidateSecond(const int& second);
    
private:
    int Hour{16};
    int Minute{40};
    int Second{04};
    
};
