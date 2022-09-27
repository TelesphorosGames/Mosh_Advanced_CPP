#pragma once

class Date
{
public:
    explicit Date(int year, int month, int day);

    
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

    
private:

    int Year{};
    int Month{};
    int Day{};
    
    
};
