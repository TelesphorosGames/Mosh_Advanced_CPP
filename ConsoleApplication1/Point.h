#pragma once

class Point
{
public:

    Point(int x, int y);

    bool operator==(const Point& PointToCompare) const;

private:

    int x;
    int y;
    
};
