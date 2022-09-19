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
