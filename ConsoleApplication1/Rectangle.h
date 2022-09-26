#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:

    Rectangle(int InitialHeight, int InitialWidth);
    int GetWidth() const {return Width; }
    void SetWidth(int width);

    int GetHeight() const {return Height; }
    void SetHeight(int height);
    
    virtual void Draw() override;
    int GetArea();

private:
    int Width{};
    int Height{};
};
