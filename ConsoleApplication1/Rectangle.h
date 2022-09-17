#pragma once

class Rectangle
{
public:

    Rectangle(int InitialHeight, int InitialWidth);
    int GetWidth() const {return Width; }
    void SetWidth(int width);

    int GetHeight() const {return Height; }
    void SetHeight(int height);
    
    void Draw();
    int GetArea();

private:
    int Width{};
    int Height{};
};
