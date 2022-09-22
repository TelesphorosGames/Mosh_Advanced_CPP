#include "Length.h"

Length::Length(int value) : LengthValue(value)
{
}

bool Length::operator==(const Length& ComparingLength) const
{
    return LengthValue == ComparingLength.LengthValue;
}

bool Length::operator==(int ComparingLength) const
{
    return LengthValue == ComparingLength;
}

Length& Length::operator++()
{
    LengthValue++;
    return  *this;
}

Length Length::operator++(int)
{
    Length copy = *this;
    operator++();
    return  copy;
}

Length::operator int() const
{
    return LengthValue;
}

istream& operator>>(istream& stream, Length& length)
{
    int value;
    stream >> value;
    length.set_length_value(value);
    return stream;
}

ostream& operator<<(ostream& stream, Length& length)
{
    stream << length.length_value();
    return {stream};
}
