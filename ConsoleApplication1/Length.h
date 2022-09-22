#pragma once
#include <ostream>
#include <istream>

using namespace std;

class Length
{
public:
    explicit Length(int value);

    bool operator==(const Length& ComparingLength) const;
    bool operator==(int ComparingLength) const;

    Length& operator++(); // prefix operator
    Length operator++(int); // postfix syntax

    operator int() const; 

    
    int length_value() const {return LengthValue;}

    void set_length_value(int length_value)
    {
        LengthValue = length_value;
    }
    
    
private:

    int LengthValue{};
    friend ostream& operator <<(ostream& stream, const Length& length);
   
};

ostream& operator <<(ostream& stream, const Length& length);
istream& operator >>(istream& stream, Length& length);
