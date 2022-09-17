﻿#pragma once
#include <string>

using namespace std;


class TextBox
{
public:
    TextBox();
    
    void SetValue(const string& value);
   
    string GetValue() const {return Value;}

private:
    
    string Value;

   
};
