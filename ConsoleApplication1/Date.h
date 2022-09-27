#pragma once


class Date
{
public:
    Date(int year, int month, int day);

  
    
    int GetYear() const {return Year ; }
    int GetMonth() const {return Month ; }
    int GetDay() const {return Day ; }

    
    static int ValidateYear(const int& year);
    static int ValidateMonth(const int& month);
    static int ValidateDay(const int& day);

    
private:

    int Year{1990};
    int Month{2};
    int Day{19};
    
    
};
