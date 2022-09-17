#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int InitialHeight, int InitialWidth)
{
    SetHeight(InitialHeight);
    SetWidth(InitialWidth);
}

void Rectangle::SetWidth(int width)
{
    if(Width<0)
    {
        throw invalid_argument("width");
    }

    Width = width;
}

void Rectangle::SetHeight(int height)
{
}

void Rectangle::Draw()
{
    cout << "Drawing a rectangle\n";
    cout << "Dimensions: " << Width << ", " << Height<< endl;
}

int Rectangle::GetArea()
{
    
    return Width * Height;
}
