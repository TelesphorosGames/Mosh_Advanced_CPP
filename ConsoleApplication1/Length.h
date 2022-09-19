#pragma once

class Length
{
public:
    explicit Length(int value);

    bool operator==(const Length& ComparingLength) const;
    bool operator==(int ComparingLength) const;
    
    
private:

    int LengthValue{};
    
};
