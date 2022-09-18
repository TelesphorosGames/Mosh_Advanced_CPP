#pragma once
#include <string>

using namespace std;


class TextBox
{
public:
    TextBox() = default;
    explicit TextBox(const string& Value);
    
    void SetValue(const string& value);
   
    string GetValue() const {return Value;}

private:
    
    string Value;

   
};
