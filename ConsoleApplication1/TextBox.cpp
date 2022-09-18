#include "TextBox.h"

TextBox::TextBox(const string& Value) : Value{Value} 
{
    
}

void TextBox::SetValue(const string& value)
{
    Value = value;
}
