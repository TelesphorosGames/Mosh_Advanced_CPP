#pragma once
#include <iostream>


class Date
{
public:
   Date(const int year,const int month,const int day);
  
    
    int GetYear() const {return Year ; }
    int GetMonth() const {return Month ; }
    int GetDay() const {return Day ; }

    
    static int ValidateYear(const int& year);
    static int ValidateMonth(const int& month);
    static int ValidateDay(const int& day);


    // Comparison operator :

    bool operator>(const Date& Other) const; 
    bool operator<(const Date& Other) const; 
    
private:

    int Year{1990};
    int Month{2};
    int Day{19}; 

    
    
};
