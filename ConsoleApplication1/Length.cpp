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
